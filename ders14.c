#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// 1 ile 10 aras�ndaki say�lar� while d�ng�s� ile s�ralayan program
	/*
	int i=1;
	while(i<=10)
	{
		printf("%d ",i);
		i++;
	}	
	*/
	//1-20 aras� say�lar� g�r�nt�lerken 14'� yazd�rmayan program
	
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
	
	// Girilen say�n fakt�riyel degerini bulma
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
