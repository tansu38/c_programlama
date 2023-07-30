#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char kitap[40];
	printf("Ad: ");
	scanf("%s",kitap);
	
	printf("%s",kitap);
	
	printf("\n%15s",kitap);
	
	printf("\n%15.5s",kitap);
	
	printf("\n%-15s",kitap);
	return 0;
}
