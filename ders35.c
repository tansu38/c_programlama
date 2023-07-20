#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double derece,sonucsin,sonuccos;
	
	printf("Dereceyi giriniz:");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);
	sonuccos=cos(derece);
	
	printf("sin(%.1lf)= %lf",derece,sonucsin);
	printf("\ncos(%.1lf)= %lf",derece,sonuccos);
	
	return 0;
}
