#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int dizi[100];
	int i,sayi;
	
	printf("Kac Sayi girmek istiyorsunuz:");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("%d. sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	printf("Girmis oldugunuz sayilar sirasi ile soyle: ");
	
	for(i=0;i<sayi;i++)
	{
		printf("%d ",dizi[i]);
	}
	
	return 0;
}
