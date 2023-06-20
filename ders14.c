#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// 1 ile 10 arasýndaki sayýlarý while döngüsü ile sýralayan program
	/*
	int i=1;
	while(i<=10)
	{
		printf("%d ",i);
		i++;
	}	
	*/
	//1-20 arasý sayýlarý görüntülerken 14'ü yazdýrmayan program
	
	int i=1;
	while(i<=20)
	{
		if(i==14)
		{
			i++;
		}
		else
		{
			printf("%d ",i);
			i++;
		}
	}
	
	// Girilen sayýn faktöriyel degerini bulma
	int fak=1, sayi;
	printf("\n\nFaktoriyel degerini bulmak istediginiz sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	while(sayi>=1)
	{
		fak=fak*sayi;
		sayi--;
	}
	printf("Sayisinin faktoriyel degeri: %d",fak);
	return 0;
}
