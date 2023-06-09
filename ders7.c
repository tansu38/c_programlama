#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*
	float sayi1,sayi2,toplam;
	printf("ilk sayiyi giriniz:");
	scanf("%f",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%f",&sayi2);
	toplam=sayi1+sayi2;
	printf("Toplama sonucu:%f",toplam);8
	*/
	/*
	float a,b,c;
	printf("Birinci sayi:");
	scanf("%f",&a);
	printf("Ýkinci sayi:");
	scanf("%f",&b);
	
	c=a/b;
	printf("Sonuc: %f",c);
	*/
	
	// Girilen maaþýn yüzde 12 zamlý halini bulma
	
	/*
	printf("***** Zam maaþ Hesabi *****\n\n");
	float maas,zamlimaas;
	printf("Maasinizi giriniz: ");
	scanf("%f",&maas);
	zamlimaas=maas*112/100;
	printf("Yeni Maas: %f",zamlimaas);
	*/
	
	// çemberde alan= pi*r*r
	// çemberde çevre= 2*pi*r
	
	/*
	printf("****** Dairede Alan ve Cevre Hesaplama *****\n\n");
	float r,pi,alan,cevre;
	pi=3.14;
	printf("Yaricapi giriniz:");
	scanf("%f",&r);
	
	alan=pi*r*r;
	cevre=2*pi*r;
	
	printf("Daire'nin Alani:%f\nDairenin Cevresi:%f",alan,cevre);
	*/
	
	//YGS puan Hesaplama
	// tükçe:1.999
	//Matematik:3,998
	//Sosyal Bilgiler:1
	//Fen bilgileri:2.999
	//Taban:100.160
	
	float turk,mat,sos,fen,toplampuan;
	
	printf("Turkce Netiniz:");
	scanf("%f",&turk);
	printf("Matematik Netiniz:");
	scanf("%f",&mat);
	printf("Fen Bilgiler Netiniz:");
	scanf("%f",&fen);
	printf("Sosyal Bilgiler Netiniz:");
	scanf("%f",&sos);
	
	toplampuan=turk*1.999+mat*3.998+fen*2.999+sos*1+100.160;
	printf("YGS Puaniniz:%f",toplampuan);
	
	return 0;
}
