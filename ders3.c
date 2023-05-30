#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	char Ad[10],Soyad[10],Yas[2],Sehir[14],Meslek[10];
	printf("Adiniz: ");
	scanf("%s",Ad);
	
	printf("Soydiniz: ");
	scanf("%s",Soyad);
	
	printf("Yasiniz: ");
	scanf("%s",Yas);
	
	printf("Sehriniz: ");
	scanf("%s",Sehir);
	
	printf("Mesleginiz: ");
	scanf("%s",Meslek);
	
	printf("\n**********\n");
	printf("Adi: %s - Soyadi: %s\n",Ad,Soyad);
	printf("Yasi: %s\n",Yas);
	printf("Sehri: %s\n",Sehir);
	printf("Meslegi: %s\n",Meslek);
	printf("**********");
	return 0;
}
