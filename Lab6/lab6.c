#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/*void dodaj(int* a, int* b, int* wynik) {
	*wynik = *a + *b;*/
	//do zadania 1
	/*void odejmuj(int* a, int* b, int* wynik) {
		*wynik = *a - *b;
	}
	void wyliczSrednia(int* a, int* b,int* c, double* wynik1) {
		*wynik1 = (*a + *b + *c)/3;
	}*/

	//int main() {
		//do ruwnania kwadratowego
		/*int a, b, c, x1, x2;
		int wynik;
		printf("Podaj a: "); scanf("%lf", &a);
		printf("Podaj b: "); scanf("%lf", &b);
		printf("Podaj c: "); scanf("%lf", &c);
		wynik = rowKw(&a, &b, &c, &x1, &x2);
		if (wynik == 2) {
			printf("Dwa rzeczywiste x1= %.2f, x2= %.2\nf", x1, x2);

		}
		else if (wynik == 1) {
			printf("Jeden pierwiastek x1=x2")

		}*/
		//do void
		/*int a = 2, b = 34, suma;
		dodaj(&a, &b, &suma);
		printf("suma: %d", suma);*/
		/*int a = 5;
		int b = 23;
		/*int* wsk; //wskaznik typu calkowitego
		wsk = &a;//przepisywania adresu zmiennej a do wskaznokiwej*/
		/*printf("wartosc a = %d\n", a);
		printf("wartosc b: %d\n", b);
		int* wsk = &a;
		int* wsk1 = &b;
		*wsk = 40;
		*wsk1 = 40;
		/*printf("adres a = %p\n", &a);
		printf("adres przechowywany w wsk: %p\n", wsk);*/
		/*printf("wartosc a: %d\n", a);
		printf("wartosc b: %d\n", b);*/
		/*int tab[] = {1,2,3,4,5};
		int* ptr = tab;
		for (int i = 0; i < 5; i++) {
			printf("tab[%d] = %d\n", i, *(ptr + i));
			printf("adres tab[%d] = %p\n", i, (ptr + i));
		}*/
		//dynamiczne alokowanie pamieci
		/*int* tab;
		int n;
		printf("Podaj rozmiar tablicy: ");
		scanf("%d", &n);
		//alokacja pamieci
		tab = (int*)malloc(n * sizeof(int));
		if (tab == NULL) {
			printf("blad alokacji pamieci");
			return 1;
		}
		for (int i = 0; i < n; i++) {
			tab[i] = i * 10;
			printf("tab[%d] = %d\n", i, tab[i]);
		}
		free(tab);*/

		//zadania
		//1
		/*int a = 5;
		int b = 23;
		int c = 32;
		int ruznica;
		double srednia;
		int* wsk;
		wsk = &a;
		wsk = &b;
		wsk = &c;
		odejmuj(&a, &b, &ruznica);
		wyliczSrednia(&a, &b, &c, &srednia);
		printf("wartosc a: %d\n", a);
		printf("wartosc b: %d\n", b);
		printf("wartosc c: %d\n", c);
		printf("adres a: %p\n", &a);
		printf("adres b: %p\n", &b);
		printf("adres c: %p\n", &c);
		printf("ruznica: %d\n", ruznica);
		printf("srednia: %.2f\n", srednia);*/
		//2


		//return 0;
	//}
	//do ruwnania
	/*int rowKw(double* a, double* b, double* c, double* x1, double* x2) {
		double delta;

		if (*a == 0) {
			printf("To nie jest rownanie kwadratowe.\n");
			return -1;//blad
		}
		delta = ((*b) * (*b)) - (4 * (*a) * (*c));
		if (delta > 0) {
			*x1 = (-(*b) + sqrt(delta)) / (2 * (*a));
			*x1 = (-(*b) - sqrt(delta)) / (2 * (*a));
			return 2;
		} else if(delta == 0)
		{
	*x1 = *x2 = (-(*b) ) / (2 * (*a));
	return 1;
		}

	}*/