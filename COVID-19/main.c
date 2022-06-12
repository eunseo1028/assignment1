#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 300
#include "covid.h"
// 사용자가 원하는 코로나에 대한 정보를 알려주는 프로그램. 모든 정보 출력 시 프로그램이 종료됨.

void menu(void);
void information(int choice, struct COVID** q, int count[]);

int main(void)
{
	struct COVID c = { " 사람과 다양한 동물에 감염될 수 있는 바이러스로서 유전자 크기 27~32kb의 RNA 바이러스","5~7","발열,기침,호흡곤란,오한,근육통,두통,인후통,후각·미각소실 등","코로나19 백신, 올바른 손씻기, 기침 예절 준수" }; //구조체에 들어갈 내용
	struct COVID* p;
	struct COVID** q;

	p = &c;
	q = &p;
	int choice = 0, i;
	int count[4] = { 0 };
	int res = 1;

	while (res) { // 모든 정보가 출력됐는지 확인
		for (i = 0; i < 4; i++) {
			if (count[i] == 0)
				break;
			else if (i != 3 && count[i] == 1)
				continue;
			else if (count[3] == 1)
				res = 0;
			break;
		}

		if (res == 1)
			menu(); //메뉴
		else { // 모든 정보 출력 시 종료.
			printf("------------------------------------------------------------------\n");
			printf("더 이상 알려드릴 정보가 없습니다. 종료합니다.\n");
			break;
		}
		scanf_s("%d", &choice); //사용자로부터 번호를 입력받음.

		if (choice < 0 || choice>4) //메뉴에 없는 번호 입력 시 알림.
			printf("번호를 다시 입력해주세요.\n");
		else if (choice == 0) { // 번호 0을 입력 시 종료.
			printf("종료합니다.\n");
			break;
		}
		else
			information(choice, &p, count);
	}
	return 0;
}
void menu(void) { //메뉴를 화면에 표시하는 함수
	printf("\n");
	printf("==================================================================\n");
	printf("코로나에 대해 알고 싶은 정보의 번호를 입력해주세요.\n");
	printf(" 0.종료\n 1. 개요\n 2. 잠복기\n 3. 증상\n 4. 예방법\n");
	printf("==================================================================\n");
}