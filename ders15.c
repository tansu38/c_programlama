#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*
	int ay;
	printf("Kacinci ayi ogrenmek istiyorsunuz:");
	scanf("%d",&ay);
	
	switch(ay)
	{
		case 1: printf("Ocak"); break;
		case 2: printf("Subat"); break;
		case 3: printf("Mart"); break;
		case 4: printf("Nisan"); break;
		case 5: printf("Mayis"); break;
		case 6: printf("Haziran"); break;
		case 7: printf("Temmuz"); break;
		case 8: printf("Agustos"); break;
		case 9: printf("Eylul"); break;
		case 10: printf("Ekim"); break;
		case 11: printf("Kasim"); break;
		case 12: printf("Aralik"); break;
		default: printf("Hatali sayi girdiniz:"); break;
	}
	*/
	// Girilen harfe göre dersi ekrana yazdýrma
	
	char harf;
	printf("Dersin Bas harfini Giriniz:");
	scanf("%s",&harf);
	
	switch(harf)
	{
		case 't': printf("Turkce"); break;
		case 'm': printf("Matematik"); break;
		case 's': printf("Sosyal Bilgiler"); break;
		case 'f': printf("Fen Bilgisi"); break;
		default: printf("Yanlis Harf Girdiniz!"); break;
	}
	
	return 0;
}
