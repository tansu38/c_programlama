#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double sayi,sonuc1,sonuc2;
	
	printf("Degeri giriniz: ");
	scanf("%lf",&sayi);
	sonuc1=floor(sayi);
	
	printf("Sonuc= %.3lf",sonuc1);
	
	sonuc2=ceil(sayi);
	printf("\nSonuc: %.3lf",sonuc2);
	
	return 0;
}
