#include <stdio.h>
#include "covid.h"
#define SIZE 300

void information(int choice, struct COVID** q, int count[]){ //��ȣ �Է� �� ���� ȭ�鿡 ��� �Լ�

	switch (choice) {
	case 1:
		printf("����:%s\n", (**q).outline);
		count[0] = 1;
		break;
	case 2:
		printf("�ẹ��: ���%s��\n", (**q).incubation_period);
		count[1] = 1;
		break;
	case 3:
		printf("����: %s\n", (**q).symptom);
		count[2] = 1;
		break;
	case 4:
		printf("�����: %s\n", (**q).prevention);
		count[3] = 1;
		break;
	}
}