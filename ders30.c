#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Ornek 1: El bagaci icin 8 kilo ustu --> 4 TL/kg
	//			Bagaj icin 15 kilo ustu --> 5 TL/kg
	
	int el,bagaj,ucret=0;
	printf("El bagaj agirligini giriniz:");
	scanf("%d",&el);
	printf("Bagaj agirligini giriniz:");
	scanf("%d",&bagaj);
	
	if(el-8>0)
	{
		ucret=ucret+(el-8)*4;
	}
	if(bagaj-15>0)
	{
		ucret=ucret+(bagaj-15)*5;
	}
	
	printf("Odemeniz gereken toplam ucret: %d\n\n",ucret);
	
	// Ornek 2: Klavyeden girilen iki farkli sayi ve arasinda bulunan sayilarin toplamini bulan program
	
	int sayi1,sayi2,toplam=0,i;
	
	printf("Kucuk sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("Buyuk sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	for(i=sayi1;i<=sayi2;i++)
	{
		toplam=toplam+i;
	}
	printf("%d'den %d'ye kadar olan sayilarin toplami: %d\n",sayi1,sayi2,toplam);
	
	
	// Klavyeden girilen 3 basamakli bir sayinin sakamlarý toplamini bulan program
	
	int sayi,rtoplam;
	
	printf("Uc basamakli bir sayi giriniz:");
	scanf("%d",&sayi);
	
	rtoplam=(sayi/100)+((sayi%100)/10)+((sayi%100)%10);
	printf("%d sayisinin rakamlari toplami: %d",sayi,rtoplam);
	
	
	return 0;
}
