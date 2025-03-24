#pragma once
#include <iostream>
#include <vector>
#include <map>


using namespace std;

struct Item {
	int idx;
	string name; // 이름
	string type; // 유형(장착, 소모품, 퀘스트)
	string type2;// 유형(무기, 방어구, HP, MP)
	int value;	 // 수치(공격, 방어, HP, MP)

	void showItem(){
		// cout << "Item Name : " << this->name << endl;
		// cout << "Item Type : " << this->type << endl;
		// if(this->type == "Equip"){
		// 	cout << "Item Equipment Type : " << this->type2 << endl;
		// 	if(this->type2 == "Weapon") {
		// 		cout << "Item Attack : " << this->value << endl;
		// 	} else {
		// 		cout << "Item Defense : " << this->value << endl;
		// 	}
		// } else if(this->type == "Consumable"){
		// 	cout << "Item Effect : " << this->type2 << " recovered" << endl;
		// }
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
	}
};

typedef vector<Item> ItemArray;

struct ItemFind {
	int idx;

	bool operator() (Item item) {
		return (item.idx == idx);
	}
};

class Inventory {
public:
	ItemArray inventory;
	int questCount = 0;

	void addItem(Item* item) {
		inventory.push_back(*item);
		if(item->type == "QuestItem"){
			questCount++;
		}
	}

	void removeItem(int idx) {
		inventory.erase(inventory.begin() + idx);
	}

	int useItem(int idx) {
		// 인벤토리에서 인덱스값으로 아이템인덱스 추출
		Item usingItem = inventory[idx];
		// 소모 아이템이 아니라면 false 반환
		if(usingItem.type != "Consumable"){
			return -1;
		} else {
			removeItem(idx);
			return idx;
		}
	}

	int equipItem(int idx) {
		// 인벤토리에서 인덱스값으로 아이템인덱스 추출
		Item usingItem = inventory[idx];
		// 소모 아이템이 아니라면 false 반환
		if(usingItem.type != "Equip"){
			return -1;
		} else {
			removeItem(idx);
			return idx;
		}
	}

	int inventoryFind(int idx) {
		//itemArray;
		// 인벤토리에서 인덱스값으로 아이템인덱스 추출
		// int itemIdx = inventory[idx].idx;

		// ItemFind find;
		// find.idx = itemIdx;
		// vector<Item>::iterator iter;
		// iter = find_if(item.begin(), item.end(), find);
		// if (iter != item.end() && item[itemIdx].type == "Consumable") {
		// 	removeItem(idx);
		// 	return item[itemIdx].idx;
		// }
		// else {
		// 	return -1;
		// }
		return 0;
	}

	void displayInventory(){
		if(inventory.size() > 1){
			cout << "Inventory :" << endl;
			for(int i = 0; i < inventory.size(); i++){
				cout << i << ". " << inventory[i].name << endl;
			}
		} else {
			cout << "Inventory is Empty" << endl;
		}
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
		defense = 10;
	}
	Player(int hp, int mp){
		hp = hp;
		mp = mp;
	}

	void useItem(Inventory& inventory, int idx, Item* item) {
		// 아이템 사용(소모품)
		int result = inventory.useItem(idx);
		string type = item->type;
		if(result){
			if(item->type2 == "Hp"){
				hp += item->value;
			} else if(item->type2 == "Mp") {
				mp += item->value;
			}
		}
	}

	void equipItem(Inventory& inventory, int idx, Item* item) {
		// 아이템 장착(장착류)
		int result = inventory.equipItem(idx);
		auto fresult = find(equipment.begin(), equipment.end(), item->name);
		if(result && fresult == equipment.end()){
			if(item->type2 == "Weapon"){
				attack += item->value;
			} else if(item->type2 == "Armor") {
				defense += item->value;
			}
			equipment.push_back(item->name);
		} else if(fresult != equipment.end()){
			cout << "already Equip" << endl;
		}
	}

	void showStats() {
		// 현재 스탯 출력
		cout << "[STATUS]" << endl;
		cout << "Name : " << name << endl;
		cout << "HP : " << hp << ", MP : " << mp << endl;
		cout << "Attack : " << attack << ", Defense : " << defense << endl;
	}

	void endTurn() {
		hp -= 3;
		mp -= 3;
	}
};