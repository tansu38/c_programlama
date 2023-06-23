#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// Birer birer artarak ilerleyen bir dizinin elemanlarýný çarparak faktoriyel iþlemigerçekleþtirme
	
	int i,fak=1,dizi[7]={2,3,4,5,6,7,8};
	
	for(i=0;i<7;i++)
	{
		fak*=dizi[i];
	}
	printf("Sonuc: %d",fak);
	
	return 0;
}
