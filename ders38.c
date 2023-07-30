#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char kelime[100];
	printf("Kelime:");
	//scanf("%s",kelime);
	gets(kelime);
	printf("Katar Uzunlugu: %d",strlen(kelime));
	
	
	
	return 0;
}
