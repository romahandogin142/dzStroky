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
		printf("Введите номер задания : ");
		scanf("%d", &nz);

		if (nz == 999)
		{
			break;
			system("exit");
		}

		else if (nz == 1)
		{
			/* Составить программу, которая:
				a.	запрашивает имя человека и повторяет его на экране;
				b.	запрашивает имя человека и повторяет его на экране с приветствием. */
			system("cls");
			char first[Size];
			printf("Введите ваше имя: ");
			scanf("%s", first);
			printf("a. %s\n", first);
			printf("b. %s добро пожаловать!!!\n", first);
		}

		else if (nz == 2)
		{
			/*Составить программу, которая запрашивает название футбольной команды и повторяет его на экране со словами "— это чемпион!".*/
			system("cls");
			char footbol[Size];
			printf("Введите название команды: ");
			scanf("%s", &footbol);
			printf("%s - этот человек  чемпион!\n", &footbol);
		}

		else if (nz == 3)
		{
			/*Составить программу, которая запрашивает отдельно имя и отдельно фамилию, а затем выводит их как одну символьную строку*/
			system("cls");
			char name[Size];
			char firstName[Size];
			printf("Введите ваше имя и фамилию через пробел: ");
			scanf("%s %s", &name, &firstName);
			printf("%s %s мы приветствуем вас!\n", &name, &firstName);
		}

		else if (nz == 4)
		{
			/*Составить программу, которая запрашивает название государства и его столицы, а затем выводит сообщение:
			"Столица государства ... — город ..." (на месте многоточий должны быть выведены соответствующие значения).*/
			system("cls");
			char Stolica[Size];
			char City[Size];
			printf("Введите название вашей  столицы и города через пробел: ");
			scanf("%s %s", &Stolica, &City);
			printf("Столица государства %s — город %s\n", &Stolica, &City);
		}

		else if (nz == 5)
		{
			/*Дано название футбольного клуба. Определить количество символов в нем*/
			system("cls");
			char footbol[Size];
			printf("Введите название футбольного клуба: ");
			scanf("%s", &footbol);
			printf("В названии клуба %d символов\n", strlen(footbol));
		}

		else if (nz == 6)
		{
			/*Дано название города. Определить, четно или нет количество символов в нем*/
			system("cls");
			char city[Size];
			printf("Введите название вашег огорода города: ");
			scanf("%s", &city);
			if (strlen(city) % 2 == 0)
				printf("В городе %s четное кол-во символов\n",&city);
			else
				printf("В городе %s не четное кол-во символов\n", &city);
		}

		else
		{
			printf("Такого задания не существует !!! \n");
		}
	}
}