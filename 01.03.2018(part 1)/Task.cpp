#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include <Windows.h>

unsigned short int nz;
#define Size 20

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int i, j;
	while (true)
	{
		printf("������� ����� ������� : ");
		scanf("%d", &nz);

		if (nz == 999)
		{
			break;
			system("exit");
		}

		else if (nz == 1)
		{
			/* ��������� ���������, �������:
				a.	����������� ��� �������� � ��������� ��� �� ������;
				b.	����������� ��� �������� � ��������� ��� �� ������ � ������������. */
			system("cls");
			char first[Size];
			printf("������� ���� ���: ");
			scanf("%s", first);
			printf("a. %s\n", first);
			printf("b. %s ����� ����������!!!\n", first);
		}

		else if (nz == 2)
		{
			/*��������� ���������, ������� ����������� �������� ���������� ������� � ��������� ��� �� ������ �� ������� "� ��� �������!".*/
			system("cls");
			char footbol[Size];
			printf("������� �������� �������: ");
			scanf("%s", &footbol);
			printf("%s - ���� �������  �������!\n", &footbol);
		}

		else if (nz == 3)
		{
			/*��������� ���������, ������� ����������� �������� ��� � �������� �������, � ����� ������� �� ��� ���� ���������� ������*/
			system("cls");
			char name[Size];
			char firstName[Size];
			printf("������� ���� ��� � ������� ����� ������: ");
			scanf("%s %s", &name, &firstName);
			printf("%s %s �� ������������ ���!\n", &name, &firstName);
		}

		else if (nz == 4)
		{
			/*��������� ���������, ������� ����������� �������� ����������� � ��� �������, � ����� ������� ���������:
			"������� ����������� ... � ����� ..." (�� ����� ���������� ������ ���� �������� ��������������� ��������).*/
			system("cls");
			char Stolica[Size];
			char City[Size];
			printf("������� �������� �����  ������� � ������ ����� ������: ");
			scanf("%s %s", &Stolica, &City);
			printf("������� ����������� %s � ����� %s\n", &Stolica, &City);
		}

		else if (nz == 5)
		{
			/*���� �������� ����������� �����. ���������� ���������� �������� � ���*/
			system("cls");
			char footbol[Size];
			printf("������� �������� ����������� �����: ");
			scanf("%s", &footbol);
			printf("� �������� ����� %d ��������\n", strlen(footbol));
		}

		else if (nz == 6)
		{
			/*���� �������� ������. ����������, ����� ��� ��� ���������� �������� � ���*/
			system("cls");
			char city[Size];
			printf("������� �������� ����� ������� ������: ");
			scanf("%s", &city);
			if (strlen(city) % 2 == 0)
				printf("� ������ %s ������ ���-�� ��������\n",&city);
			else
				printf("� ������ %s �� ������ ���-�� ��������\n", &city);
		}

		else
		{
			printf("������ ������� �� ���������� !!! \n");
		}
	}
}