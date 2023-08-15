#include <stdio.h>
#include <stdlib.h>

void islem(char *p1, int *p2, int no[], int basamak) {
    int i,cift=0,tek=0;

    for (i = 0; i < basamak; i++) {
        if (no[i]%2==0){
            p1[cift]=no[i] + '0';
            cift++;
        } 
		else {
            p2[tek]=no[i];
            tek++;
        }
    }

    printf("cift sayilar:\n");
    for(i=0;i<cift;i++){
    	printf("%c ",p1[i]);
	}

    printf("\ntek sayilar:\n");
    for(i=0;i<tek;i++){
    	printf("%d ",p2[i]);
	}
}

int main() {
	int i;
    int ogr_no[20];
    int basamak_sayisi;
    printf("ogrenci numaraniz kac basamaklidir:");
    scanf("%d", &basamak_sayisi);
    printf("ogrenci numaranizi giriniz:\n");
    for(i=0;i<basamak_sayisi;i++){
    	printf("%d.basamak:",i+1);
    	scanf("%d",&ogr_no[i]);
	}

    char *p1_char = (char *)malloc(basamak_sayisi * sizeof(char));
    int *p2_int = (int *)malloc(basamak_sayisi * sizeof(int));

    islem(p1_char, p2_int, ogr_no, basamak_sayisi);

    free(p1_char);
    free(p2_int);

    return 0;
}


