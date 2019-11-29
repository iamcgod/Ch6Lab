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
	student stu[3] = { {"970101","四子一甲","王曉明",61,71,81},
						{"970102","四子一甲","李鍾維",92,82,72},
						{"970103","四子一甲","張大成",73,63,83} };
	student *ps = stu;
	printf("\n");
	printf("============================================\n");
	printf("學號	班級	姓名	國文	英文	數學\n");
	printf("============================================\n");

	for (i = 0; i <= 2; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->clas, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);

	}
	printf("	呼叫函式前\n\n");
	sub(ps);
	printf("\n	呼叫函式後\n");
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