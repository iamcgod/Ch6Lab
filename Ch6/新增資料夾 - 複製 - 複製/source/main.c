#include <stdlib.h>
#include <stdio.h>
#include "Header.h"

typedef struct _stu
{
	char num[7], clas[20], name[30];
	int score[3];

}student;

void sub(student *p);

void main(void)
{
	int i;
	student stu[3] = { {"970101","�|�l�@��","�����",61,71,81},
						{"970102","�|�l�@��","�����",92,82,72},
						{"970103","�|�l�@��","�i�j��",73,63,83} };
	student *ps = stu;
	printf("\n");
	printf("============================================\n");
	printf("�Ǹ�	�Z��	�m�W	���	�^��	�ƾ�\n");
	printf("============================================\n");

	for (i = 0; i <= 2; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->clas, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);

	}
	printf("	�I�s�禡�e\n\n");
	sub(ps);
	printf("\n	�I�s�禡��\n");
	for (i = 0; i <= 2; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->clas, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);

	}
	system("pause");
}

void sub(student *p)
{
	for (int i = 0; i <= 2; i++)
	{
		(p + i)->score[0] += 10;
		(p + i)->score[1] += 10;
		(p + i)->score[2] += 10;
	}
}