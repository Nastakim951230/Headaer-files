#include "Zagolovki.h"
int main()

{
	system("chcp 1251>nul");
	printf("�������� ������� \n1. C���� \n2.�������� \n3.��������� \n4.������� \n5.����������� ���� �����\n");
		int s;
	scanf_s("%d", &s);
	switch (s)
	{
	case 1: {
		system("cls");
		printf("�����\n");
		int a, b;
		printf("������� ������ �����: ");
		scanf_s("%d", &a);
		printf("������� ������ �����: ");
		scanf_s("%d", &b);
		printf("����� ���������: %d \n", Summ(a, b));
		system("pause");
		system("cls");
	}
	case 2:
	{

		system("cls");
		printf("��������\n");
		int a, b;
		printf("������� ������ �����: ");
		scanf_s("%d", &a);
		printf("������� ������ �����: ");
		scanf_s("%d", &b);
		printf("�������� ���������: %d \n", Razno(a, b));
		system("pause");
		system("cls");
	}
	case 3:
	{
		
		system("cls");
		printf("���������\n");
		int a, b;
		printf("������� ������ �����: ");
		scanf_s("%d", &a);
		printf("������� ������ �����: ");
		scanf_s("%d", &b);
		printf("�������� ���������: %d \n", Ymno(a, b));
		system("pause");
		system("cls");
	}
	case 4:
	{
		
		system("cls");
		printf("�������\n");
		int a, b;
		printf("������� ������ �����: ");
		scanf_s("%d", &a);
		printf("������� ������ �����: ");
		scanf_s("%d", &b);
		printf("��������� ���������: %3.2f\n", Delen(a, b));
		system("pause");
		system("cls");
	}
	case 5:
	{
		
		system("cls");
		printf("����������� �����\n");

		char* a = "������ ";
		char* b = "���";
		printf("%s\n", associations(a, b));
		system("pause");
		system("cls");
	}
	
	default:
	{
		printf("����");
	}
		break;
	}

	return 0;
}
char* associations(char* a, char* b)
{
	int l1 = 0, l2 = 0;
	while (a[l1] != '\0')
	{
		l1++;
	}
	while (a[l2] != '\0')
	{
		l2++;
	}
	char* c = calloc(l1 + l2, sizeof(char));
	for (int i = 0; i < l1; i++) {
		c[i] = a[i];
	}
	for (int i = 0; i < l2; i++) {
		c[i + l1] = b[i];
	}
	c[l1 + l2] = '\0';
	return c;
}
