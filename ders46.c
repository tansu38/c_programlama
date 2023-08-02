#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi=20;
	int *s=&sayi;
	
	//sayiyi ekrana yazdirma
	
	printf("Deger: %d %x",sayi,&sayi);
	
	// Adresi ekrana yazdirma
	
	printf("\nAdres: %x\n------------\n",s);
	
	char harf='a';
	char *h=&harf;
	
	//Harfi ekrana yazdirma
	printf("\n%c",harf);
	printf("\nAdres: %x",h);
	
	return 0;
}
