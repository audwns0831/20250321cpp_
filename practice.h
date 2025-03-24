#pragma once
#include <iostream>
#include <vector>
#include <map>

using namespace std;



// idx = 아이템 일련번호, 
class Item {
public:
	string name;
	int value;
	string type;
	string type2;

	virtual void setItem(string& itemName) {
		name = itemName;
	};

	string getItemName(string& itemName) {
		return this->name;
	}

	int getItemValue(string& itemName) {
		return this->value;
	}

	string getItemType(string& itemName) {
		return this->type;
	}

	string getItemType2(string& itemName) {
		return this->type2;
	}
};

// 장착 아이템
class Equip : public Item {
protected:
	void setItem(string& itemName) override {
		Item::setItem(itemName);
		type = "Equip";
	}
};
// 무기
class Weapon : public Equip {
public:
	void setItem(string& itemName) override {
		Equip::setItem(itemName);
		value = value;
		type2 = "Weapon";
	}
};
// 방어구
class Armor : public Equip {
public:
	void setItem(string& itemName) override {
		Equip::setItem(itemName);
		value = value;
		type2 = "Armor";
	}
};

// 소모품 아이템
class Consumable : public Item {
protected:
	void setItem(string& itemName) override {
		Item::setItem(itemName);
		type = "Consumable";
	}
};

// HP회복
class HpPotion : public Consumable {
public:
	void setItem(string& itemName) override {
		Consumable::setItem(itemName);
		value = value;
		type2 = "HP";
	}
};
// MP회복
class MpPotion : public Consumable {
public:
	void setItem(string& itemName) override {
		Consumable::setItem(itemName);
		value = value;
		type2 = "MP";
	}
};

// 퀘스트 아이템
class QuestItem : public Item {
protected:
	void setItem(string& itemName) override {
		Item::setItem(itemName);
		type = "QuestItem";
	}
};

struct Inventory {
public:
	map<string, vector<int>> inven;

	void displayInventory(Inventory* inventory) {
	}

	void addItem(Item* item) {
		// 아이템 추가
		inven[item->name] = { item->value };
	}

	void removeItem(string& itemName) {
		// 아이템 제거
	}

	void useItem(string& itemName) {
		// 아이템 사용(소모품 사용)
	}
	void equipItem(string& itemName) {
		// 장착아이템 장착
	}

};


struct Player {
public:
	string name;
	int hp;
	int mp;
	int attack;
	int defense;

	Player() {
		name = "Hero";
		hp = 100;
		mp = 100;
		attack = 10;
		defense = 10;
	}

	void useItem(Inventory& inventory, string& itemName) {
		// 아이템 사용
	}

	void equipItem(Inventory& inventory, string& itemName) {
		// 아이템 장착
	}

	void showStats() {
		// 현재 스탯 출력
		cout << "[현재 스탯]" << endl;
		cout << "이름 : " << name << endl;
		cout << "HP : " << hp << ", MP : " << mp << endl;
		cout << "공격력 : " << attack << ", 방어력 : " << defense << endl;
	}

	
private:
	void endTurn() {
		hp -= 3;
		mp -= 3;
	}
};

