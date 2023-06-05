#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Eþkenar Üçgende Alan ve Çevre Bulma
	
	int ukenar, ucevre;
	float ualan;
	
	printf("*****Eskenar Ucgende Alan ve Cerve*****\n\n");
	printf("Ucgenin kenar uzunlugunu giriniz: ");
	scanf("%d",&ukenar);
	ualan= ukenar*ukenar*sqrt(3)/4;
	ucevre=3*ukenar;
	
	
	printf("\n");
	printf("Ucgenin Alani: %f\n",ualan);
	printf("Ucgenin Cevresi: %d",ucevre);
	
	// Üç sýnav ve bir proje notu girilen öðrencinin not ortalamasý
	
	int sinav1, sinav2, sinav3, proje, ortalama;
	
	printf("\n\n*****  Not Ortalamasi Hesaplama *****");
	printf("\n\nIlk sinav notunu giriniz:");
	scanf("%d",&sinav1);
	printf("Ikinci sinav notunu giririz:");
	scanf("%d",&sinav2);
	printf("Ucuncu sinav notunu giriniz:");
	scanf("%d",&sinav3);
	printf("Proje notunu giriniz:");
	scanf("%d",&proje);
	ortalama= (sinav1+sinav2+sinav3+proje)/4;
	printf("\nOgrencinin not ortalamasi:%d",ortalama);
	
	// Bagaj Ücret Hesabý
	
	printf("\n\n\n***** Yuk Ucret Hesaplama *****");
	int bagajyuku, elyuku, ucret;
	printf("\n\nBagak yukunun agirligini giriniz:");
	scanf("%d",&bagajyuku);
	printf("El yukunun agirligini giriniz:");
	scanf("%d",&elyuku);
	ucret=((bagajyuku-15)+(elyuku-8))*5;
	printf("\nOdenecek Ucret:%d",ucret);
	

	return 0;
}
