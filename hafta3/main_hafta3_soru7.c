#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char *kelime1,*kelime2;
	int i,kontrol1=0,kontrol2=0;
	kelime1=(char*)malloc(20*sizeof(char));
	kelime2=(char*)malloc(20*sizeof(char));
	printf("birinci kelimeyi giriniz:");
	scanf("%s",kelime1);
	printf("ikinci kelimeyi giriniz:");
	scanf("%s",kelime2);
	if(strlen(kelime1)==strlen(kelime2)){
		for(i=0;i<strlen(kelime1)-1;i++){
			if(*(kelime1+i)==*(kelime2+i)){
				kontrol1++;
			}
			else{
				kontrol2++;
			}
		}
		if(kontrol1==strlen(kelime1)-1){
			printf("bu iki kelime aynidir. uzunluklari:%d",strlen(kelime1));
		}
		else{
			printf("bu iki kelime ayni degildir. uzunluklari esittir ve %d dir",strlen(kelime1));
		}
	}
	else{
		if(strlen(kelime1)>strlen(kelime2)){
			printf("%s daha uzundur ve uzunlugu:%d dir",kelime1,strlen(kelime1));
		}
		else{
			printf("%s daha uzundur ve uzunlugu:%d dir",kelime2,strlen(kelime2));
		}
	}
	return 0;
}
