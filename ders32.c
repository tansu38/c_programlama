#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Klavyeden girilen iki deger ile ust alma islemi
	
	int x,y,sonuc;
	
	printf("Taban sayiyi giriniz: ");
	scanf("%d",&x);
	printf("Ust degerini giriniz: ");
	scanf("%d",&y);
	
	sonuc=pow(x,y);
	
	printf("%d Sayisinin %d ustu: %d",x,y,sonuc);
	
	
	return 0;
}
