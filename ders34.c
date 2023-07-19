#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double sayi,sonuc,sonuc2;
	printf("SAyiyi giriniz:");
	scanf("%lf",&sayi);
	
	sonuc=fabs(sayi);
	printf("Sonuc: %.lf",sonuc);
	
	sonuc2=log(sayi);
	
	printf("\nSonuc Logaritma: %.7lf",sonuc2);
	
	
	
	
	return 0;
}
