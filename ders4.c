#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*
	int sayi1,sayi2,toplam,carp,fark,bol;
	sayi1=50;
	sayi2=10;
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carp=sayi1*sayi2;
	bol=sayi1/sayi2;
	
	printf("Toplam Sonuc: %d\n",toplam);
	printf("Fark: %d\n",fark);
	printf("Carbim: %d\n",carp);
	printf("Bolum: %d",bol);
	
	*/
	/*
	int s1,s2,islem;
	s1=10;
	s2=11;
	islem=s1/s2;
	printf("Sonuc: %d",islem);
	*/
	
	// Karenin Alan ve Çevresini Bulunmasý
	int kenar,alan,cevre;
	kenar=10;
	alan=kenar*kenar;
	cevre=4*kenar;
	printf("Kare Alan: %d",alan);
	printf("\nKare Cevre: %d",cevre);
	
	// Dikdirgen Alan ve Çevre
	int kisakenar,uzunkenar,alan2,cevre2;
	kisakenar=8;
	uzunkenar=12;
	alan2= kisakenar*uzunkenar;
	cevre2=(kisakenar+uzunkenar)*2;
	
	printf("\n\nDikdorgen Alan: %d",alan2);
	printf("\nDikdorgen Cevre: %d",cevre2);
	
	
	
	
	return 0;
}
