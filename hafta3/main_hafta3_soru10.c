#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i,bosluk=0;
	char *cumle;
	printf("cumlenizi giriniz:");
	cumle=(char *)malloc(150*sizeof(char));
    fgets(cumle,150,stdin);
    for(i=0;i<strlen(cumle);i++){
    	if(cumle[i]==' '){
    		bosluk++;
		}
	}
	printf("cumlende %d kelime vardir.",bosluk+1);
	return 0;
}
