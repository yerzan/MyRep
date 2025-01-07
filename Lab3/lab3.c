#include <stdio.h>
#include <string.h>
#define ROZMIAR  10
#include <time.h>


//int main() {
	/*int a;
int tabInt[5];
int tabIntCopy[5];*/
/*	int arr2d[2][5] = {
		{2,3,4,5,6},
		{-23,3,12,1,23}

	};
	//arr2d[0][2] = 1234; zamiana elementu
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", arr2d[i][j]);
		}printf("\n");

	}*/


	//int tabInt1[] = { -32,12,1,3,23 };
	/*int lengthArr = sizeof(tabInt) / sizeof(tabInt[0]);
	int x = 0;
	for (int i = 0; i < lengthArr; i++)
	{
		tabInt[i] = x;
		printf("%d\t", tabInt[i]);

	}
	memset(tabInt, 1, sizeof(tabInt));
	memset(tabIntCopy, tabInt, sizeof(tabInt));*/



	/*for (int i = 0;i < 5;i++) {
		printf("Element o indeksie[%d]=%d\n", i, tabInt1[i]);
	}
	tabInt[0] = 123;
	tabInt[3] = tabInt[1] * 2;
	for (int i = 0;i < 5;i++) {
		printf("element tablicy %d = %d\n", i + 1, tabInt[i]);
	}*/
	/*for (int i = 0; i <; i++)
	/*for (int i = 0; i <; i++)
	{

	}*/

	//zadanie 1
	/*int tab[ROZMIAR], x = 3;
	for (int i = 0; i < ROZMIAR; i++)
	{
		tab[i] = x;
		printf("%d\t", tab[i]);
		x += 3;
	}*/

	//zadanie 2
	/*int i = 0, tab[ROZMIAR], x = 3;

		for ( i ; i < ROZMIAR; i++)
		{
			tab[i] = x;
			if (tab[i] % 2 == 0) {
				printf("%d\t", tab[i]);
			}
			x += 3;
	}*/

	//zadanie 3
/*#define n 10
	int a;
	printf("Podaj wartosc poczatkowa (a): ");
	scanf_s("%d", &a);
	int tab[n];
	for (int i = n-1 ; i >= 0; i--)
	{
		tab[i] = a;
		a -= 5;
		}
	for (int i = 0; i < n; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");


	return 0;*/
	//zadanie 4
/*#define n 10
	int tab[n];
	int min;
	srand(time(NULL));
	printf("Elementy tablicy: ");
	for (int i = 0; i < n; i++) {
		tab[i] = (rand() % (50 - (-23) + 1)) + (-23); // Losowanie z przedzialu [-23, 50]
		printf("%d ", tab[i]);
	}
	printf("\n");
	min = tab[0];
	for (int i = 1; i < n; i++) {
		if (tab[i] < min) {
			min = tab[i];
		}
	}
	printf("Minimalna wartosc w tablicy: %d\n", min);

	return 0;*/
	//zadanie 5
//}