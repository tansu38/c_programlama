#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char kitapAdi[15],yazar[15],sayfaSayisi[3],basimTarihi[4],BasimEvi[15],tur[10];
	
	
	printf("\nKitabin adini giriniz:");
	scanf("%s",kitapAdi);
	
	printf("Yazari giriniz:");
	scanf("%s",yazar);
	
	printf("Sayfa sayisini giriniz:");
	scanf("%s",sayfaSayisi);
	
	printf("Basim Tarihini giriniz:");
	scanf("%s",basimTarihi);
	
	printf("Basim evini giriniz:");
	scanf("%s",BasimEvi);
	
	printf("Kitabin turunu giriniz:");
	scanf("%s",tur);
	
	printf("\n******* Kitap Envarteri *******");
	printf("\n\nKitabin Adi: &s",kitapAdi);
	printf("\nYazari: %s",yazar);
	printf("\nSayfa Sayisi: %s",sayfaSayisi);
	printf("\nBasim Tarihi: %s",basimTarihi);
	printf("\nBasim Evi: %s",BasimEvi);
	printf("\nTur: %s",tur);
	

	return 0;
}
