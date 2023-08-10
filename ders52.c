#include <stdio.h>
#include <stdlib.h>
#define puan 2.19
#define puan2 3.47
int main() {
	
	float turkce,matematik;
	printf("Turkce Netiniz: ");
	scanf("%f",&turkce);
	
	printf("Matematik Netiniz: ");
	scanf("%f",&matematik);
	
	float sozelPuan,sayisalPuan;
	
	sozelPuan=turkce*puan+matematik*puan2+50.25;
	sayisalPuan=turkce*puan+matematik*puan2+51.45;
	printf("Toplam Sozel Puaniniz: %.3f",sozelPuan);
	printf("\nToplam Sayisal Puaniniz: %.3f",sayisalPuan);
	return 0;
}
