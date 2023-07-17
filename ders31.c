#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Klavyeden girilen sayinin karakökünü bulan program
	
	int sayi;
	double sonuc;
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	sonuc=sqrt(sayi);
	
	printf("%.9f",sonuc);
	
	
	
	
	return 0;
}
