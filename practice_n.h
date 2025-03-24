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
		// 인벤토리에서 인덱스값으로 아이템인덱스 추출
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
		// 인벤토리에서 인덱스값으로 아이템인덱스 추출
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