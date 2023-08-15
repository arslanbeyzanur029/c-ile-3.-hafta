#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int i,n,kontrol=0;
	char **cumle;
	char *kelime;
	printf("cumlenizde kac adet kelime olacak:");
	scanf("%d",&n);
	cumle=(char**)malloc(n*sizeof(char*));
	kelime=(char*)malloc(15*sizeof(char));
	for(i=0;i<n;i++){
		cumle[i]=(char*)malloc(15*sizeof(char));
		printf("cumlenizin %d. kelimesi:",i+1);
		scanf("%s",cumle[i]);
	}
	printf("arattiginiz kelimeyi giriniz:");
	scanf("%s",kelime);
	for(i=0;i<n;i++){
		if(strcmp(cumle[i],kelime)==0){
			printf("%s kelimesi %d . indekstedir",kelime,i+1);
		}
		else{
			kontrol=kontrol+1;
		}
	}
	if(kontrol==n){
		printf("boyle bir kelime yoktur.");
	}
	
	for (i = 0; i < n; i++) {
        free(cumle[i]);
    }
    free(cumle);
    free(kelime);
	return 0;
}
