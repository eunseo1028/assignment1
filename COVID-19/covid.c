#include <stdio.h>
#include "covid.h"
#define SIZE 300

void information(int choice, struct COVID** q, int count[]){ //번호 입력 시 정보 화면에 출력 함수

	switch (choice) {
	case 1:
		printf("개요:%s\n", (**q).outline);
		count[0] = 1;
		break;
	case 2:
		printf("잠복기: 평균%s일\n", (**q).incubation_period);
		count[1] = 1;
		break;
	case 3:
		printf("증상: %s\n", (**q).symptom);
		count[2] = 1;
		break;
	case 4:
		printf("예방법: %s\n", (**q).prevention);
		count[3] = 1;
		break;
	}
}