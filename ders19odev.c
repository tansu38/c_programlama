#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("*** Elemanlari disaridan girilen dizinin toplamini ve ortalamasini bulan program ***\n\n");
	int dizi[100];
	int i,sayi;
	float ort,toplam=0;
	printf("Kac Sayi girmek istiyorsunuz:");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("%d. sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
		toplam+=dizi[i];
	}
	ort= toplam/sayi;
	printf("\nGirmis oldunuz sayilarin toplami: %f",toplam);
	printf("\nGirmis oldunuz sayilarin ortalamasi: %f",ort);
	return 0;
	
}
