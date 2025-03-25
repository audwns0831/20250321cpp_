#include <iostream>
#include "practice_n.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
	vector<string> _itemArray[] = {
		{"Equip", "LongSword", "Weapon", "30"},
		{"Equip", "ShortSword", "Weapon", "10"},
		{"Equip", "Upper", "Armor", "10"},
		{"Equip", "Lower", "Armor", "10"},
		{"Equip", "Glove", "Armor", "5"},
		{"Equip", "Shoes", "Armor", "5"},
		{"Equip", "Shield", "Armor", "20"},
		{"QuestItem", "DragonTear", "QuestItem", "0"},
		{"Consumable", "HpPotion", "Hp", "30"},
		{"Consumable", "MpPotion", "Mp", "30"}
	};

	Item item;
	ItemArray items;
	StructItem itemInfo;

	for (auto i : _itemArray) {
		Item new_item;
		new_item.setName(i[1]);
		new_item.setType(i[0]);
		new_item.setSubType(i[2]);
		new_item.setValue(stoi(i[3]));
		StructItem _new_item = new_item.setItem();
		//cout << i[0] << " " << i[1] << " " << i[2] << " " << i[3] << endl;
		items.push_back(_new_item);
	}

	//cout << items[0].idx << endl;
	//ItemArray::iterator iter;
	/*for (iter = items.begin(); iter != items.end(); iter++) {
		cout << iter[0].idx << iter[0].name << " "<< iter[0].type << " " << iter[0].type2 << endl;
	}*/

	Player player; // 플레이어 생성
	player.showStats();
	

	Inventory inventory;

	while(inventory.questCount < 10){
		srand((unsigned)time(NULL));
		int randomItemNum = rand() % items.size();

		items[randomItemNum].showItem();
		inventory.addItem(&items[randomItemNum]);

		int action, _inventory_action, _inventory_number;

		cout << "[ Choose Your Action ]" << endl;
		cout << "1. Use Item " << endl;
		cout << "2. Equip Item " << endl;
		cout << "3. Inventory " << endl;
		cin >> action;

		ItemArray _inventory = inventory.getInventory();
		_inventory_number = _inventory.size() - 1;
		if (_inventory_number < 0) _inventory_number = 0;

		// Use Item
		if (action == 1) {
			player.useItem(inventory, _inventory_number, &items[randomItemNum]);
		}
		// Equip Item
		else if (action == 2) {
			player.equipItem(inventory, _inventory_number, &items[randomItemNum]);
		}
		// Inventory
		else if (action == 3) {
			_inventory_action = inventory.displayInventory();

			if (_inventory_action == 1 or _inventory_action == 2) {

				cout << " Choose Item Number : ";
				cin >> _inventory_number;

				int itemIdx = inventory.getItemIdx(_inventory_number);
				itemInfo = item.getItem(items, itemIdx);
				item.showItem(itemInfo);

				if (_inventory_action == 1) { // 아이템 사용 함수
					player.useItem(inventory, _inventory_number, &items[itemIdx]);
				}
				else if (_inventory_action == 2) { // 아이템 장착 함수
					player.equipItem(inventory, _inventory_number, &items[itemIdx]);
				}
				else {
					cout << "Can't Use Item" << endl;
				}
			}
		}

		if (inventory.questCount == 10 || player.hp <= 0) {// 퀘스트아이템 10개 획득 시 게임 종료
			cout << endl;
			cout << "----------------------------------------" << endl;
			cout << "[ The End ]" << endl;
			cout << "----------------------------------------" << endl;
			break;
		}
		player.endTurn();
		player.showStats();
	}

	return 0;
}