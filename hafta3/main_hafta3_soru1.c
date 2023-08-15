#include <stdio.h>
#include <stdlib.h>



int main() {
	int n,i,max;
	printf("bellekten kac byte yer ayrilacagini giriniz:");
	scanf("%d",&n);
	
	int *bellek=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++){
		printf("%d.eleman:",i+1);
		scanf("%d",&bellek[i]);
	}
	int *ptr;
	ptr=bellek;
	max=bellek[0];
	for(i=0;i<n;i++){
		if(ptr[i] > max){
			max=ptr[i];
		}
		
	}
	printf("%d",max);
	return 0;
}
