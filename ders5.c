#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*
	int sayi1,sayi2,toplam,fark,carpim;
	printf("1. sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("2. sayiyi giriniz:");
	scanf("%d",&sayi2);
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carpim=sayi1*sayi2;
	
	printf("Sayilarin toplami: %d",toplam);
	printf("\nSayilarin farki: %d",fark);
	printf("\nSayilarin Carpimi: %d",carpim);
	*/
	
	/*
	int kenar,cevre,alan;
	printf("***** Karede alan ve cevre hesabi***** \n\n");
	printf("Kenar uzunlugunu giriniz:");
	scanf("%d",&kenar);
	alan=kenar*kenar;
	cevre=4*kenar;
	printf("Karenin alani: %d",alan);
	printf("\nKarenin cevresi: %d",cevre);
	*/
	/*
	int s1,s2,s3,ortalama;
	printf("1. Sinav:");
	scanf("%d",&s1);
	printf("2. Sinav:");
	scanf("%d",&s2);
	printf("3. Sinav:");
	scanf("%d",&s3);
	ortalama=(s1+s2+s3)/3;
	printf("Ortalamaniz: %d",ortalama);
	*/
	
	int su,kola,bilet,misir,toplam;
	printf("Misir adeti:");
	scanf("%d",&misir);
	printf("Kola adeti: ");
	scanf("%d",&kola);
	printf("Su Adeti:");
	scanf("%d",&su);
	printf("Bilet Adeti:")	;
	scanf("%d",&bilet);
	toplam=misir*2+kola*2+su*1+bilet*8;
	printf("Toplam Borcunuz: %d TL'dir",toplam);
	
	
	
	
	return 0;
}
