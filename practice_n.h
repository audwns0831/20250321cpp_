#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


using namespace std;

struct StructItem {
public:
	int idx;
	string name; // 이름
	string type; // 유형(장착, 소모품, 퀘스트)
	string type2;// 유형(무기, 방어구, HP, MP)
	int value;	 // 수치(공격, 방어, HP, MP)

	void showItem(){
		cout << endl;
		cout << "----------------------------------------" << endl;
		cout << "[ New Item !]" << endl;
		cout << "- " << this->name;
		if (this->type == "Equip" && this->type2 == "Weapon"){
			cout << " (Attack + " << this->value << ")";
		} else if (this->type == "Equip" && this->type2 == "Armor"){
			cout << " (Defense + " << this->value << ")";
		} else if (this->type == "Consumable"){
			cout << " (Recover " << this->type2 << " + " << this->value << ")";
		} else {
			cout << " (QuestItem)";
		}
		cout << endl;
		cout << "----------------------------------------" << endl;
		
	}
};

typedef vector<StructItem> ItemArray;

struct ItemFind {
	int idx;

	bool operator() (StructItem item) {
		return (item.idx == idx);
	}
};
static int _gloaal_item_idx = 0;
class Item {
public:
	int itemIdx;		// Item idx
	string itemName;	// Item name;
	string itemType;	// Item type;
	string itemSubType;	// item subtype (weapon, armor, hp, mp)
	int itemValue;	// Item Value;(attack, defense, hp, mp)

	Item() {
		itemIdx = 0;
	}
	void setName(string name) {
		itemName = name;
	}
	void setType(string type) {
		itemType = type;
	}
	void setValue(int value) {
		itemValue = value;
	}
	void setSubType(string subType) {
		itemSubType = subType;
	}
	StructItem setItem() {
		// item 구조체 생성 후 구조체 반환
		StructItem item;
		item.idx = _gloaal_item_idx++;
		item.name = itemName;
		item.type = itemType;
		item.type2 = itemSubType;
		item.value = itemValue;

		return item;
	}

	StructItem getItem(ItemArray itemArray, int itemIdx) {
		return itemArray[itemIdx];
	}
	
	virtual void showItem(StructItem item) {
		cout << endl;
		cout << "----------------------------------------" << endl;
		cout << " - " << item.name << endl;
		cout << " - Type : " << item.type << endl;
		if (item.type != "QuestItem") {
			cout << " - subType : " << item.type2 << endl;
		}
		if (item.value > 0) {
			cout << " - Value : " << item.value << endl;
		}
		cout << "----------------------------------------" << endl;
	}
};

class Equip : public Item {
public:
	int attack;
	int defense;

	Equip(string subType, int value) {
		Item::setType("Equip");
		Item::setSubType(subType);
		Item::setValue(value);
	}
};

class Consumable : public Item {
public:
	int hp;
	int mp;

	Consumable(string subType, int value) {
		Item::setType("Consumable");
		Item::setSubType(subType);
		Item::setValue(value);
	}
};

class QuestItem : public Item {
public:
	QuestItem() {
		Item::setType("QuestItem");
	}
};

class Inventory {
public:
	ItemArray inventory;
	int questCount = 0;

	void addItem(StructItem* item) {
		inventory.push_back(*item);
		if(item->type == "QuestItem"){
			questCount++;
		}
	}

	void removeItem(int idx) { // idx = inventoryidx parameter
		inventory.erase(inventory.begin() + idx);
	}

	// 소모품 사용
	bool useItem(int idx, StructItem* item) { // parameter ( inventory_idx, item_info)
		if (item->type == "Consumable") {
			removeItem(idx);
			return true;
		}
		else {
			return false;
		}
	}

	// 아이템 장착
	bool equipItem(int idx, StructItem* item) { // parameter ( inventory_idx, item_info)
		if (item->type == "Equip") {
			removeItem(idx);
			return true;
		}
		else {
			return false;
		}
	}

	int getItemIdx(int idx) {
		ItemArray::iterator it = this->inventory.begin() + idx;
		return it->idx;
	}

	int displayInventory(){
		int _inventory_flag = 0;
		cout << endl;
		cout << "----------------------------------------" << endl;
		if(inventory.size() > 0){
			cout << "[ Inventory ]" << endl;
			for(int i = 0; i < inventory.size(); i++){
				cout << i << ". " << inventory[i].name << endl;
			}
			cout << "----------------------------------------" << endl;
			cout << " [ Choose Your action ] " << endl;
			cout << " 0. Exit " << endl;
			cout << " 1. Use Item (Number of Item) " << endl;
			cout << " 2. Equip Item (Number of Item) " << endl;
			
			cin >> _inventory_flag;
		} else {
			cout << "Inventory is Empty" << endl;
		}
		cout << "----------------------------------------" << endl;
		cout << endl;

		return _inventory_flag;
	}

	ItemArray getInventory() {
		return inventory;
	}
};

struct Player {
public:
	string name;
	int hp;
	int mp;
	int attack;
	int defense;
	vector<string> equipment;


	Player() {
		name = "Hero";
		hp = 100;
		mp = 100;
		attack = 10;
		defense = 5;
	}

	// 아이템 사용(소모품)
	void useItem(Inventory& inventory, int idx, StructItem* item) {// 매개변수 (인벤토리, 인벤토리번호, 아이템정보)
		bool uresult = inventory.useItem(idx, item); // parameter ( inventory_idx, item_info)
		if (!uresult) { // useItem 이 아닐때 ( not consumable )
			cout << "Can't Use Item" << endl;
			return;
		}
		else {
			if (item->type == "Consumable") {
				if (item->type2 == "Hp") {
					hp += item->value;
				}
				else if (item->type2 == "Mp") {
					mp += item->value;
				}
				//inventory.useItem(idx, item);
			}
		}
	}

	// 아이템 장착(장착류)
	void equipItem(Inventory& inventory, int idx, StructItem* item) { // 매개변수 (인벤토리, 인벤토리번호, 아이템정보)
		bool eresult = inventory.equipItem(idx, item); // parameter ( inventory_idx, item_info)
		if (!eresult) {
			cout << "Can't Eqip Item." << endl;
			return;
		}
		else {
			auto fresult = find(equipment.begin(), equipment.end(), item->name);
			if (item->type == "Equip" && fresult == equipment.end()) {
				if (item->type2 == "Weapon") {
					attack += item->value;
				}
				else if (item->type2 == "Armor") {
					defense += item->value;
				}
				equipment.push_back(item->name);
				//inventory.equipItem(idx, item);
			}
			else if (fresult != equipment.end()) {
				cout << "already Equip" << endl;
			}
		}
	}

	void showStats() {
		// 현재 스탯 출력
		cout << "----------------------------------------" << endl;
		cout << "[STATUS]" << endl;
		cout << "Name : " << name << endl;
		cout << "HP : " << hp << ", MP : " << mp << endl;
		cout << "Attack : " << attack << ", Defense : " << defense << endl;
		cout << "----------------------------------------" << endl;
	}

	bool isInventory(Inventory& inventory, int idx) {
		/*if (idx > inventory) {

		}*/
		return true;
	}

	void endTurn() {
		hp -= 3;
		mp -= 3;
	}
};