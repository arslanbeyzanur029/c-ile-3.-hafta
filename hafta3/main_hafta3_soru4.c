#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int i;
	char dizi1[100];
	char dizi2[100];
	printf("ilk dizinize ifade giriniz:");
	gets(dizi1);
	printf("ikinci dizinize ifade giriniz:");
	gets(dizi2);
	char *sonuc=(char*)calloc(strlen(dizi1)+strlen(dizi2),sizeof(char));
	for(i=0;i<strlen(dizi1);i++){
		sonuc[i]=dizi1[i];
	}
		for(i=0;i<strlen(dizi2);i++){
		sonuc[strlen(dizi1)+i]=dizi2[i];
	}
	for(i=0;i<strlen(dizi1)+strlen(dizi2);i++){
		printf("%c",sonuc[i]);
	}
	return 0;
}
