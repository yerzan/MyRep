#include <stdio.h>
#include <string.h>
#include <ctype.h>
//deklaracja funkcji
//int silnia(int n); //dla zadania 1
//int ntyWyraz(int n); //dla zadania 2
//int nwd(int a, int b);//dla zadania 3
//int main() {
	//dla zadania 2
	/*int n;
	printf("Podaj wartosc n: ");
	scanf("%d", &n);
	int result = ntyWyraz(n);
	printf("n - ty wyraz ciagu dla n = % d to : % d\n", n, result);*/
	//dla zadania 3
	/*int a, b;
	printf("Podaj pierwsza liczbe (a): ");
	scanf("%d", &a);
	printf("Podaj druga liczbe (b): ");
	scanf("%d", &b);
	printf("NWD(%d, %d) = %d\n", a, b, nwd(a, b));*/
	//zadanie 4
	/*int tabInt[9] = {1,1,1,2,5,4,9,6,13};
	for (int i =0 ; i < 9; i++) {
		printf("Wynik[%d]: %d\n", i, tabInt[i]);
	}*/


	//return 0;
//}

//zadanie 1
/*int silnia(int n) {
	if (n == 0) return 1;
	return n * silnia(n - 1);

}*/
//zadanie 2
/*int ntyWyraz(int n) {
	if (n == 1) {
		return -1;
	}
	else {
		return -1*ntyWyraz(n - 1) * (n - 2);
	}
}*/
//zadanie 3
/*int nwd(int a, int b) {
	if (b == 0) return a;
	return nwd(b, a % b);
}*/