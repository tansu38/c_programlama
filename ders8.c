#include <stdio.h>
#include <stdlib.h>



int main() {
	
	/*
	int sayi1,sayi2,toplam;
	sayi1=24;
	sayi2=23;
	toplam=sayi1+sayi2;
	
	if(toplam>=50)
	{
		printf("Toplma degeriniz:%d - 50'den buyuk.",toplam);
	}
	else
	{
		printf("Toplam degeriniz: %d - 50'den kucuk.",toplam);
	}
	*/
	printf("***** Ogrenci Ortalama Hesaplama *****\n\n");
	int s1,s2,ort;
	printf("1. sinavi giriniz:");
	scanf("%d",&s1);
	printf("2. sinavi giriniz:");
	scanf("%d",&s2);
	ort=(s1+s2)/2;
	
	if(ort<50)
	{
		printf("Sinav Ortalamaniz: %d ---- Kaldiniz",ort);
	}
	else
	{
		printf("Sinav Ortalamaniz:%d ---- Gectiniz",ort);
	}
	
	
	return 0;
}
