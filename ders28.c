#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Bir bakteri turu her saat basi kendini ikiye bolerek cogalmaktadir. Bu labaratuvarda 24 saat sonra kac tane bakteri olur?
	
	int sayi=1,i;
	
	for(i=1;i<=24;i++)
	{
		sayi=sayi*2;
	}
	
	printf("Toplam bakteri sayisi: %d\n",sayi);
	
	
	// Klavyeden dört tane tam sayi alýp bunlarin toplamalarini bulan program
	
	int s1,toplam=0;
	
	for(i=1;i<5;i++)
	{
		printf("%d. SAyiyi giriniz: ");
		scanf("%d",&s1);
		toplam= toplam+s1;
	}
	
	printf("Sayilarin Toplami: %d",toplam);
	
	//Klavyeden 0 girilene kadar girilen sayilari toplayan program
	
	int deger,top=0;
	printf("\n\nSayi giriniz:");
	scanf("%d",&deger);
	
	
	while(deger!=0)
	{
		top=top+deger;
		printf("Sayi giriniz:");
		scanf("%d",&deger);
	}
	
	printf("Girdiginiz SAyilarin toplami: %d \n",top);
	
	/* Bir otopark ucretlendir sistemi su sekildedir;
	0-4 Saat: 10 TL
	5-8 Saat: 12 TL
	9-12 Saat: 15 TL
	13++ Saat: 20 TL
	Klavyeden otoparkta kac saat kaldýgý girilen aracin odemesi gereken tutari hesaplayan program
	*/
	
	int saat,ucret;
	
	printf("Saati giriniz:");
	scanf("%d",&saat);
	
	switch(saat)
	{
		case 0:
		case 1:
		case 3:
		case 4: printf("Ucret: 10 TL");break;
		case 5:
		case 6:
		case 7:
		case 8: printf("Ucret: 12 TL");break;
		case 9:
		case 10:
		case 11:
		case 12: printf("Ucret: 15 TL");break;
		default: printf("Ucret: 20 TL");break;
		
	}
	return 0;
}
