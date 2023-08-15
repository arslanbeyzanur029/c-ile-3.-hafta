#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
	int n,i;
	char **dizi;
	printf("kac adet kelime gireceksiniz:");
	scanf("%d",&n);
	dizi=(char**)calloc(n,sizeof(char*));
	for(i=0;i<n;i++){
		dizi[i]=(char*)malloc(100*sizeof(char));
		printf("%d.kelime:",i+1);
		scanf("%s",dizi[i]);
	}
	printf("degismeden once:\n");
	for(i=0;i<n;i++){
		printf("%s ",dizi[i]);
	}
	printf("\n\ndegistikten sonra:\n");
		for(i=n-1;i>=0;i--){
		printf("%s ",dizi[i]);
	}
	return 0;
}
