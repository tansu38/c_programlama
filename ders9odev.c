#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	// 3 sinav ve 1 proje notu girilen öðrencinin harf notu
	
	int s1,s2,s3,p,ort;
	
	printf("***** Ogrenci Harf Notu Hesaplama ******\n\n");
	
	printf("1. sinav notunu giriniz:");
	scanf("%d",&s1);
	printf("2. sinav notunu giriniz:");
	scanf("%d",&s2);
	printf("3. sinav notunu giriniz:");
	scanf("%d",&s3);
	printf("Proje notunu giriniz:");
	scanf("%d",&p);
	
	ort=(s1+s2+s3+p)/4;
	printf("Ortalama: %d --- ",ort);
	
	if(ort<50)
	{
		printf("Harf Notu: FF");
	}
	if(ort>=50 &&ort<60)
	{
		printf("Harf Notu: DD");
	}
	if(ort>=60 && ort<70)
	{
		printf("Harf Notu: CC");
	}
	if(ort>=70 &&ort<85)
	{
		printf("Harf Notu: BB");
	}
	if(ort>=85)
	{
		printf("Harf Notu: AA");
	}
	
	return 0;
}
