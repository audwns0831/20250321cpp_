#pragma once
#include <iostream>
#include <vector>
#include <map>


using namespace std;

struct Item {
	int idx;
	string name; // �̸�
	string type; // ����(����, �Ҹ�ǰ, ����Ʈ)
	string type2;// ����(����, ��, HP, MP)
	int value;	 // ��ġ(����, ���, HP, MP)
};

typedef vector<Item> ItemArray;

struct ItemFind {
	int idx;

	bool operator() (Item item) {
		return (item.idx == idx);
	}
};

class Inventory {
	vector<int> inventory;

	void addItem(Item* item) {
		inventory.push_back(item->idx);
	}

	void removeItem(int idx) {
		inventory.erase(inventory.begin() + idx);
	}

	int useItem(ItemArray item, int idx) {
		// �κ��丮���� �ε��������� �������ε��� ����
		int result = inventoryFind(idx);
		if (result != -1) {
			cout << ""
		}
		else if (result == 0) {

		}
		else {
			removeItem(idx);
			return true;
		}

		ItemFind find;
		find.idx = itemIdx;
		vector<Item>::iterator iter;
		iter = find_if(item.begin(), item.end(), find);
		if (iter != item.end() && item[itemIdx].type == "Consumable") {
			removeItem(idx);
			return item[itemIdx].idx;
		}
		else {
			return -1;
		}
	}

	void equipItem(ItemArray item, int idx) {

	}

	int inventoryFind(int idx) {
		//itemArray;
		// �κ��丮���� �ε��������� �������ε��� ����
		int itemIdx = inventory[idx];

		ItemFind find;
		find.idx = itemIdx;
		vector<Item>::iterator iter;
		iter = find_if(item.begin(), item.end(), find);
		if (iter != item.end() && item[itemIdx].type == "Consumable") {
			removeItem(idx);
			return item[itemIdx].idx;
		}
		else {
			return -1;
		}
	}
};