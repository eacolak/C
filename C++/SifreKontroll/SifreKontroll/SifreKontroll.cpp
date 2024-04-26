#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");
	char sifre[50];
	int lowers = 0;
	int uppers = 0;
	printf("Sifre giriniz (en az 8 karakter ve en az 1 büyük harf ve bir küçük harf)");
	scanf("%s", sifre);

	for (int i = 0; i < strlen(sifre); i++) {
		if (islower(sifre[i])) {
			lowers += 1;
		}
		if (isupper(sifre[i])) {
			uppers += 1;
		}
		else {
			continue;
		}
	}


	if ((strlen(sifre) > 8) && (strlen(sifre) == 8) && (lowers > 0) && (uppers > 0)) {
		printf("Parola geçerli.");
	}
	else {
		printf("Parola geçersiz.");
	}
}