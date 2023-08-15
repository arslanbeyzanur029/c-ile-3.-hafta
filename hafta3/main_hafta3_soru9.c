#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int n,i,j,harf=0;
	char **text;
	printf("textiniz kac kelimeli olacak:");
	scanf("%d",&n);
	text=(char**)calloc(n,sizeof(char*));
	printf("tekxtinizi girin:\n");
	for(i=0;i<n;i++){
		text[i]=(char*)malloc(15*sizeof(char));
		printf("%d. cumle:",i+1);
		scanf("%s",text[i]);
	}
	for(i=0;i<n;i++){
		printf("%s ",text[i]);
	}
	int harfSayisi[26]={0};
	for(i=0;i<n;i++){
		for(j=0;j<strlen(text[i]);j++){
			char ch = text[i][j];
            if (ch>='a' && ch<='z'){
                harfSayisi[ch -'a']++;
            }
		}
	}
	printf("\nTekrar eden harf sayilari:\n");
    for (i = 0; i < 26; i++) {
        if (harfSayisi[i] > 1) {
            printf("%c: %d adet\n", 'a' + i, harfSayisi[i]);
        }
    }
	
	for (i = 0; i < n; i++) {
        free(text[i]);
    }
    free(text);

	return 0;
}
