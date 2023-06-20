#include <stdio.h>
#include <stdlib.h>



int main() {
	
	// Girilen sayiya göre haftanýn gününü bulan program
	
	int gun;
	printf("Haftanin kacinci gununu ogrenmek istiyorsunuz:");
	scanf("%d",&gun);
	
	switch (gun)
	{
		case 1: printf("Pazartesi"); break;
		case 2: printf("Sali"); break;
		case 3: printf("Carsamba"); break;
		case 4: printf("Persembe"); break;
		case 5: printf("Cuma"); break;
		case 6: printf("Cumartesi"); break;
		case 7: printf("Pazar"); break;
		default: printf("Hatali Sayi Girdiniz!"); break;
	}
	return 0;
}
