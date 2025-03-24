#include <iostream>
#include "practice_n.h"
#include <cstdlib>
#include <ctime>


using namespace std;


int main() {

	string itemNameArray[] = { "LongSword", "ShortSword", "Upper", "Lower", "Glove", "Shoes", "Shield", "DragonTear", "HpPotion", "MpPotion"};
	string itemTypeArray[] = {"Equip", "Equip","Equip","Equip","Equip","Equip","Equip","QuestItem","Consumable","Consumable"};
	string itemType2Array[] = {"Weapon", "Weapon", "Armor", "Armor", "Armor", "Armor", "Armor", "Hp", "Mp"};
	int itemValueArray[] = {10, 5, 10, 10, 5, 5, 10, 0, 30, 30};
	ItemArray items;

	for(int i = 0; i < itemNameArray->size(); i++){
		Item new_item;
		new_item.idx = i;
		new_item.name = itemNameArray[i];
		new_item.type = itemTypeArray[i];
		new_item.type2 = itemType2Array[i];
		new_item.value = itemValueArray[i];
		items.push_back(new_item);
	}

	Player player; // �÷��̾� ����
	player.showStats();
	

	Inventory inventory;
	srand((unsigned)time(NULL));

	while(inventory.questCount < 10){
		int randomItemNum = rand() % itemNameArray->size();

		items[randomItemNum].showItem();
		inventory.addItem(&items[randomItemNum]);

		int action;
		cout << "[ Choose Your Action ]" << endl;
		cout << "1. Use Item " << endl;
		cout << "2. Equip Item " << endl;
		cout << "3. Inventory " << endl;
		cin >> action;

		switch(action){
			case 1:
				player.useItem(inventory, randomItemNum, &items[randomItemNum]);
				break;
			case 2:
				player.equipItem(inventory, randomItemNum, &items[randomItemNum]);
				break;
			case 3:
				inventory.displayInventory();
				break;
			default:
				break;
		}

		player.endTurn();
		player.showStats();

	}
	
	
	// �����ۻ���
	//Item* newItem(itemArray[randomItemNum]);

	// �κ��丮 �߰�
	//inventory.addItem(itemArray[randomItemNum]);

	// �÷��̾� �ൿ ����
	int playerPos;
	//cout << "[�ൿ�� �����ϼ���.]";
	//cin >> playerPos;

	// �� �ൿ �Լ�

	// �÷��̾� ���� �� �κ��丮 ���� ���

	// ����Ʈ������ 10�� ȹ�� �� ���� ����




	return 0;
}