#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	FILE *belge;
	char karakter;
	belge=fopen("C:\\Users\\user\\Desktop\\deneme.txt","r");
	
	do{
	karakter=getc(belge);
	
	printf("%c",karakter);
	}
	while(karakter!=EOF);
	
	fclose(belge);
	
	
	return 0;
}
