#include <iostream>
#include "practice.h"
#include <cstdlib>
#include <ctime>


using namespace std;


int main() {

	string itemArray[] = { "LongSword", "ShortSword", "Upper", "Lower", "Glove", "Shoes", "Shield", "DragonTear"};
	

	Player player; // �÷��̾� ����
	player.showStats();

	srand((unsigned)time(NULL));
	int randomItemNum = rand() % itemArray->size();
	Inventory inventory;
	
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