#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 300
#include "covid.h"
// ����ڰ� ���ϴ� �ڷγ��� ���� ������ �˷��ִ� ���α׷�. ��� ���� ��� �� ���α׷��� �����.

void menu(void);
void information(int choice, struct COVID** q, int count[]);

int main(void)
{
	struct COVID c = { " ����� �پ��� ������ ������ �� �ִ� ���̷����μ� ������ ũ�� 27~32kb�� RNA ���̷���","5~7","�߿�,��ħ,ȣ����,����,������,����,������,�İ����̰��ҽ� ��","�ڷγ�19 ���, �ùٸ� �վı�, ��ħ ���� �ؼ�" }; //����ü�� �� ����
	struct COVID* p;
	struct COVID** q;

	p = &c;
	q = &p;
	int choice = 0, i;
	int count[4] = { 0 };
	int res = 1;

	while (res) { // ��� ������ ��µƴ��� Ȯ��
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
			menu(); //�޴�
		else { // ��� ���� ��� �� ����.
			printf("------------------------------------------------------------------\n");
			printf("�� �̻� �˷��帱 ������ �����ϴ�. �����մϴ�.\n");
			break;
		}
		scanf_s("%d", &choice); //����ڷκ��� ��ȣ�� �Է¹���.

		if (choice < 0 || choice>4) //�޴��� ���� ��ȣ �Է� �� �˸�.
			printf("��ȣ�� �ٽ� �Է����ּ���.\n");
		else if (choice == 0) { // ��ȣ 0�� �Է� �� ����.
			printf("�����մϴ�.\n");
			break;
		}
		else
			information(choice, &p, count);
	}
	return 0;
}
void menu(void) { //�޴��� ȭ�鿡 ǥ���ϴ� �Լ�
	printf("\n");
	printf("==================================================================\n");
	printf("�ڷγ��� ���� �˰� ���� ������ ��ȣ�� �Է����ּ���.\n");
	printf(" 0.����\n 1. ����\n 2. �ẹ��\n 3. ����\n 4. �����\n");
	printf("==================================================================\n");
}