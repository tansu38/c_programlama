#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("********************");
	printf("\n**      MENU      **");
	printf("\n********************");
	printf("\n1.Toplama Islemi\n");
	printf("2.Carpma Islemi\n");
	printf("3.Kare Bul\n");
	printf("4.Kup Bul\n");
	printf("5.Denklem (5x^2+4x+3)\n");
	
	int s1,s2,sonuc,secim;
	
	printf("Ýslem numarasini giriniz: ");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1:
			printf("Ýki sayi giriniz: ");
			scanf("%d%d",&s1,&s2);
			sonuc=s1+s2;
			printf("Toplam: %d",sonuc);
			break;
			
		case 2:
			printf("Ýki sayi giriniz:");
			scanf("%d%d",&s1,&s2);
			sonuc=s1*s2;
			printf("Carpma: %d",sonuc);
			break;
			
		case 3:
			printf("Sayiyi giriniz: ");
			scanf("%d",&s1);
			sonuc=s1*s1;
			printf("Karesi: %d",sonuc);
			break;
			
		case 4:
			printf("Sayiyi giriniz: ");
			scanf("%d",&s1);
			sonuc=s1*s1*s1;
			printf("Kubu: %d",sonuc);
			break;
			
		case 5:
			printf("X degerini Giriniz: ");
			scanf("%d",&s1);
			sonuc=5*s1*s1+4*s1+3;
			printf("Sonuc: %d",sonuc);
	}
	return 0;
}
