#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// 3 sýnav ve bir proje notu girilen öðrencinin ortalamasý
	
	printf("****** Ogrenci Not ortalama Hesaplama ******\n\n");
	
	int s1,s2,s3,p;
	float ort;
	printf("1. sinav notunu giriniz:");
	scanf("%d",&s1);
	printf("2. sinav notunu giriniz:");
	scanf("%d",&s2);
	printf("3. sinav notunu giriniz:");
	scanf("%d",&s3);
	printf("Ptoje notunu giriniz:");
	scanf("%d",&p);
	ort=(s1+s2+s3+p)/4;
	printf("Ogrencinin not ortalamsi:%f",ort);
	printf("\n\n\n");
	
	//Uzun ve kýsa kenarý ondalýklý olarak girilen dikdörgende alan ve çevre hesaplama
	
	printf("****** Dikdortgende Alan ve Cevre Hesaplama ******\n\n");
	float ukenar,kkenar,alan,cevre;
	printf("Dikdortgenin kisa kenarini giriniz:");
	scanf("%f",&kkenar);
	printf("Dikdortgenin uzun kenarini giriniz:");
	scanf("%f",&ukenar);
	alan=ukenar*kkenar;
	cevre=(ukenar+kkenar)*2;
	printf("Dikdorgenin Alani: %f \nDikdortgenin Cevresi: %f",alan,cevre);
	
	
	
	return 0;
}
