#pragma once
#include <iostream>
#include <vector>
#include <map>

using namespace std;



// idx = ������ �Ϸù�ȣ, 
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

// ���� ������
class Equip : public Item {
protected:
	void setItem(string& itemName) override {
		Item::setItem(itemName);
		type = "Equip";
	}
};
// ����
class Weapon : public Equip {
public:
	void setItem(string& itemName) override {
		Equip::setItem(itemName);
		value = value;
		type2 = "Weapon";
	}
};
// ��
class Armor : public Equip {
public:
	void setItem(string& itemName) override {
		Equip::setItem(itemName);
		value = value;
		type2 = "Armor";
	}
};

// �Ҹ�ǰ ������
class Consumable : public Item {
protected:
	void setItem(string& itemName) override {
		Item::setItem(itemName);
		type = "Consumable";
	}
};

// HPȸ��
class HpPotion : public Consumable {
public:
	void setItem(string& itemName) override {
		Consumable::setItem(itemName);
		value = value;
		type2 = "HP";
	}
};
// MPȸ��
class MpPotion : public Consumable {
public:
	void setItem(string& itemName) override {
		Consumable::setItem(itemName);
		value = value;
		type2 = "MP";
	}
};

// ����Ʈ ������
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
		// ������ �߰�
		inven[item->name] = { item->value };
	}

	void removeItem(string& itemName) {
		// ������ ����
	}

	void useItem(string& itemName) {
		// ������ ���(�Ҹ�ǰ ���)
	}
	void equipItem(string& itemName) {
		// ���������� ����
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
		// ������ ���
	}

	void equipItem(Inventory& inventory, string& itemName) {
		// ������ ����
	}

	void showStats() {
		// ���� ���� ���
		cout << "[���� ����]" << endl;
		cout << "�̸� : " << name << endl;
		cout << "HP : " << hp << ", MP : " << mp << endl;
		cout << "���ݷ� : " << attack << ", ���� : " << defense << endl;
	}

	
private:
	void endTurn() {
		hp -= 3;
		mp -= 3;
	}
};

