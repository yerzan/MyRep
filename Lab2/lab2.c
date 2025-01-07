/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>*/

//int main() {
	/*printf("Petla for:\t");
		for (int i = 0; i < 5; i++) {
			printf("%d\t", i);
		}
		printf("Petla While:\t");
		int a = 0;
		while (a < 5) {
			printf("%d\t", a);
		}
		a = 0;
		do {
			printf("%d\t", a);
			a++;

		} while (a < 5);
		return(0);*/

		/*t a = 0;
		while (1) {
			printf("Wykonanie petli numer : % d\n", a);
			a++;

			if (a == 5) break;
			if (i % 2 == 0) continue;
			printf("%d", i);
		}
		printnf("\n\n");
		for(int i = 0:
		return(0);*/


		//zadanie 1
		/*int liczba, max, licznik = 0;
		float suma = 0, srednia;
		printf("Podaj liczbe: ");
		scanf_s("%d", &liczba);
		max = liczba;
		while (liczba > 0) {

			printf("Podaj liczbe: ");
			scanf_s("%d", &liczba);
	//suma
			suma += liczba;
			licznik++;
			if (liczba > max) max = liczba;
			printf("Podaj liczbe: ");
			scanf_s("%d", &liczba);

		}
		if (licznik > 0) {
			srednia = suma / licznik;
			printf("Suma:%f\n", suma);
			printf("Srednia:%f\n", srednia);
			printf("Wartosc max:%d\n", max);

		}
		else printf("nie wprowadzono zadnych liczb dodatnich");*/






		//zadanie 2
		/*int liczba, max, suma_ujemnych = 0, suma_dodatnich = 0, licznik_ujemnych = 0, licznik_dodatnich = 0;
		printf("Podaj liczbe: ");
		scanf_s("%d", &liczba);
		max = 0;
		while (max < 9) {
			printf("Podaj liczbe: ");
			scanf_s("%d", &liczba);
			max++;
			if (liczba < 0) {
				suma_ujemnych += liczba;
				licznik_ujemnych++;
			}
			else if (liczba > 0) {
				suma_dodatnich += liczba;
				licznik_dodatnich++;
			}
		}

		printf("Ilosc ujemnych: %d\n", licznik_ujemnych);
		printf("Ilosc dodatnich: %d\n", licznik_dodatnich);
		printf("Suma ujemnych: %d\n ", suma_ujemnych);
		printf("Suma dodaynich:%d\n ", suma_dodatnich);*/




		//zadanie 3
			/*int n, liczba, suma_parzystych = 0;
			printf("Podaj liczbe elementow (n > 0):");
			scanf_s("%d", &n);
			if (n <= 0) {
				printf("Liczba elementow musi byc wieksza od 0.\n");

			}

			for (int i = 0; i < n; i++) {
				printf("podaj liczbe #%d:", i + 1);
				scanf_s("%d", &liczba);

			if (liczba % 2 == 0) {
				suma_parzystych += liczba;
				}

			}
			printf("Suma liczb parzystych: %d\n ", suma_parzystych);*/



			//zadanie 4
			/*int n, liczba, suma_parzystych = 0;
			srand(time(0));
			printf("Podaj liczbe elementow (n > 0):");
			scanf_s("%d", &n);
			if (n <= 0) {
				printf("Liczba elementow musi byc wieksza od 0.\n");

			}
			printf("Wygenerowane liczby:\n");

			for (int i = 0; i < n; i++) {
				liczba = (rand() % 56) - 10;
				printf("%d\n", liczba);

				if (liczba % 2 == 0) {
					suma_parzystych += liczba;
				}

			}
			printf("Suma liczb parzystych: %d\n ", suma_parzystych);*/


			//zadanie 5
			/*int n, i = 0;
			float srednia=0, liczba, suma_punktow=0;
			printf("Podaj liczbe studentow (n > 0):");
			scanf_s("%d", &n);
			if (n <= 0) {
				printf("Liczba elementow musi byc wieksza od 0.\n");
				return 1;
			}
			while (i < n) {
				printf("Podaj liczbe punktow studenta#%d:", i + 1);
				scanf_s("%f", &liczba);
				suma_punktow += liczba;
				i++;

			}
			srednia = suma_punktow / n;
			printf("Srednia punktow wynosi:%.2f\n", srednia);*/




			//zadanie 6
			/*int i;
			//ciang 1
			printf("Ciang 1:");
			for (i = 1; i <= 100; i++) {
				printf("%d\t", i);
			}
			printf("\n");
			//ciang 2
			printf("Ciang 2:");
			for (i = 100; i >= 0; i--) {
				printf("%d\t", i);
			}
			printf("\n");
			printf("Ciang 3:");
			for (i = 7; i <= 77; i += 7) {
				printf("%d\t", i);
			}
			printf("\n");
			printf("Ciang 4:");
			for (i = 20; i >= 0; i -= 2) {
				printf("%d\t", i);
			}
			printf("\n");*/



			//zadanie7
			//pattern 1
/*	int i, j, spaces;
	for (i = 10;i >= 1; i--) {
		for (j = 1;j <= i;j++) {
			printf("X");
		}

		printf("\n");
	}
	printf("\n");
	//pattern 2
	for (i = 1; i <= 10; i++) {
		for (spaces = 10 - i; spaces > 0; spaces--)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("X");
		printf("\n");
	}
	printf("\n");
	//pattern 3
	for (i = 10; i >= 1; i--) {
		for (spaces = 10 - i; spaces > 0; spaces--)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("X");
		printf("\n");
	}
	printf("\n");
	//pattern 4
	for (i = 1; i <= 10; i++) {
		for (spaces = 10 - i; spaces > 0; spaces--)
			printf(" ");
		for (j = 1; j <= i * 2; j++)
			printf("X");
		printf("\n");
	}*/


	//	return 0;

	//}