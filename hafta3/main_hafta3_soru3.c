#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
    char *isim;
    char *soyisim;
    printf("isminizi giriniz:");
    isim=(char*)malloc(15*sizeof(char));
    scanf("%s",isim);
    printf("soyadinizi girin:");
    soyisim=(char*)realloc(isim,(strlen(isim)+15)*sizeof(char));
    scanf(" %s",soyisim+strlen(isim));
    
    printf(" %s ",isim,soyisim);
	
	return 0;
}
