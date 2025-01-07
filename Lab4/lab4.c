#include <stdio.h>
#include <string.h>
#include <ctype.h>
//int main() {
	//skopiowanie tekstu
	/*	char dest[100];
	char src[] = "Tekst do kopiowania";
	strcpy(dest, src);
	printf("Skopiowany tekst: %s", dest);*/
	//Poruwnywanie tekstu
	/*
	char str1[] = "witaj";
	char str2[] = "Jan";
	int result = strcmp(str1, str2);
	if (result == 0) printf("Napisy sa ruwne\n");
	else if (result < 0) printf("Napis pierwszy jest mniejszy leksykograficzne\n");
	else printf("Napis pierwszy jest wiekszy leksykograficznie\n");
	*/
	//Dlugosc tekstu
	/*char str1[] = "ala ma kota";
	char str2[] = "2";
	size_t len = strlen(str1);
	printf("Dlugosc tekstu: %lu", len);
	*/
	//wczytywanie teksta
	/*char tekst[100];
	printf("Podaj tekst: ");

	//gets(tekst);
	fgets(tekst, sizeof(tekst), stdin);
	printf("Podany tekst: %s", tekst);
	*/
	//zadanie 1
	/*char str1[50] = "Witaj, ";
	char str2[] = "swiecie!";
	strcat(str1, str2); //poloczenie
	printf("Polaczony ciag: %s\n", str1);
	 char str3[50];
	 strcpy(str3, str1); //kopiowanie
	 printf("Skopiowany ciag: %s\n", str3);
	 size_t len = strlen(str3); //dlugosc
	 printf("Dlugosc tekstu: %lu\n", len);*/
	 //zadanie 2
	 /*	for (char i = 'a'; i <= 'z';i++) {
		 printf("Znak: %c, Kod ASCII: %d\n", i, i);
	 }
	 for (char i = 'A'; i <= 'Z';i++) {
		 printf("Znak: %c, Kod ASCII: %d\n", i, i);
	 }
	 for (int a = '0'; a <= '9';a++) {
		 printf("Znak: %c, Kod ASCII: %d\n", a, a);
	 }*/
	 //zadanie 3
	/*	char s1[200];
	int spolgloski = 0, samogloski = 0;
	printf_s("Podaj tekst: ");
	gets(s1);
	for (int i = 0; i < strlen(s1); i++){
		char ch = tolower(s1[i]);//komwertacja na male litery
		if (ch >= 'a' && ch <= 'z'){
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
				samogloski++;
			}
			else {
				spolgloski++;
			}

		}
	}
	printf_s("\nPodany tekst: %s\n", s1);
	printf("Liczba samoglosek: %d\n", samogloski);
	printf("Liczba spolglosek: %d\n", spolgloski);*/
	//zadanie 4
	/*char s1[200];
	printf_s("Podaj tekst: ");
	gets(s1);
	printf_s("\nOryginalny tekst: %s\n", s1);
	for (int i = 0; s1[i] != '\0'; i++) {
		s1[i] = toupper(s1[i]);//zamiena maluch liter na duze
		}
	printf_s("\nTekst po konwersji: %s\n", s1);*/
	//return 0;
//}