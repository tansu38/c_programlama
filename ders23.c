#include <stdio.h>
#include <stdlib.h>



int main() {
	// Çok boyutlu diziler
	
	
	int dizi[2][2];
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[1][0]=30;
	dizi[1][1]=40;
	
	printf("Matrisin 0-0 da bulunan elemani: %d",dizi[0][0]);
	printf("\nMatrisin 0-1 da bulunan elemani: %d",dizi[0][1]);
	printf("\nMatrisin 1-0 da bulunan elemani: %d",dizi[1][0]);
	printf("\nMatrisin 1-1 da bulunan elemani: %d",dizi[1][1]);
	
	
	
	return 0;
}
