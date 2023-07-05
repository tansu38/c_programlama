#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// Çok Boyutlu Diziyi Ekrana matris olarak yazdirma
	
	int dizi[2][2],i,j;
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[1][0]=30;
	dizi[1][1]=40;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
