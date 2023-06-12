#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*
	int sayi=8;
	
	if(sayi%2==0)
	{
		printf("Sayi ciftir.");
	}
	else
	{
		printf("Sayi tektir.");
	}
	*/
	
	// Klavyeden girilen say? 5!e tam b?l?n?yorsa
	/*
	int x;
	printf("Sayiyi girin:");
	scanf("%d",&x);
	
	if(x%5==0)
	{
		printf("Sayi 5'e tam bolunur.");
	}
	else
	{
		printf("Sayi 5'e tam bolunmez");
	}
	*/
	
	/*
	int sayi;
	printf("Sayiyi girin: ");
	scanf("%d",&sayi);
	
	if(sayi%3==0 && sayi%5==0)
	{
		printf("Sayi 15'e tam bolunur.");
	}
	else
	{
		printf("Sayi 15'e tam bolunmez.");
	}
	
	*/
	
	// Klavyeden girilen dereceye gire suyun durumunu yazan program
	
	printf("***** suyun durumu *****");
	
	int su;
	printf("\n\nSuyun sicaklik degerini giriniz:");
	scanf("%d",&su);
	
	if(su<=0)
	{
		printf("Su buz halinde.");
	}
	if(su>0 && su<100)
	{
		printf("Su sivi halde");
	}
	if(su>=100)
	{
		printf("Su buhar halinde.");
	}
	return 0;
}

