#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
	char isim[100];
	int i;
	char *bellek=(char*)malloc(16*sizeof(char));
	printf("isminizi giriniz:");
	gets(isim);
	for(i=0;i<16;i++){
		strcpy(bellek,isim);
	}
	printf("%s",bellek);
	
	return 0;
}
