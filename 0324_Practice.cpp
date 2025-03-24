#include <iostream>
#include "practice.h"
#include <cstdlib>
#include <ctime>


using namespace std;


int main() {

	string itemArray[] = { "LongSword", "ShortSword", "Upper", "Lower", "Glove", "Shoes", "Shield", "DragonTear"};
	

	Player player; // 플레이어 생성
	player.showStats();

	srand((unsigned)time(NULL));
	int randomItemNum = rand() % itemArray->size();
	Inventory inventory;
	
	// 아이템생성
	//Item* newItem(itemArray[randomItemNum]);

	// 인벤토리 추가
	//inventory.addItem(itemArray[randomItemNum]);

	// 플레이어 행동 선택
	int playerPos;
	//cout << "[행동을 선택하세요.]";
	//cin >> playerPos;

	// 각 행동 함수

	// 플레이어 스탯 및 인벤토리 상태 출력

	// 퀘스트아이템 10개 획득 시 게임 종료




	return 0;
}