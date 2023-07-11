#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Algoritma Ornekleri
	
	// 1. Ornek: Uc basamakli birbirinden farkli kac tane sayi oldugunu bulan c programi
	
	printf("1. Ornek: Uc basamakli birbirinden farkli kac tane sayi oldugunu bulan c programi\n\n");
	int i,adet=0,a,b,c;
	
	for(i=100;i<1000;i++)
	{
		a=i/100;
		b=(i%100)/10;
		c=((i%100)%10);
		
		if(a!=b &&b!=c&& a!=c)
		{
			adet++;
		}
		
	}
	printf(" Uc basamakli Rakamlari Birbirinden Farkli Sayi Adeti: %d\n\n\n", adet);
	
	//2. ornek: Klavyeden Girilen sayinin tam bolenlerini bulan program
	
	printf("2. ornek: Klavyeden Girilen sayinin tam bolenlerini bulan program\n\n");
	
	int sayi;
	printf("Sayiyi Griniz:");
	scanf("%d",&sayi);
	
	printf("%d Sayisini Tam Bolebilen Sayilar:",sayi);
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
			printf("%d, ",i);
		}
		
	}
	
	// Klavyeden girilen sayinin kupunu hesaplayan program
	
	printf("\n\n*** Sayinin Kupunu bulma ***\n");
	
	int sayi2,kup;
	printf("Sayiyi Griniz:");
	scanf("%d",&sayi2);
	kup=sayi2*sayi2*sayi2;
	printf("%d Sayisinin Kupu: %d",sayi2,kup);
	
	return 0;
}
