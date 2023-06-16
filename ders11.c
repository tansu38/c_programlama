#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
/*
	int i,fak=1;
	
	for(i=1;i<=5;i++)
	{
		fak=fak*i;
	}
	
	printf("5 Sayisinin Faktoriyel degeri: %d",fak);
*/	


	int i,sayi, fak=1;
	printf("Faktoriyel degerini bulmak istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		fak=fak*i;
	}
	
	printf("%d sayisinin faktoriyel degeri: %d",sayi,fak);
	
	
	
	return 0;
}
