#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*
	int sayilar[]={5,8,7,3,6,9};
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d ",sayilar[i]);
	}	
	*/
	int sayilar[]={10,15,20,35};
	int i,toplam=0;
	for(i=0;i<4;i++)
	{
		toplam+=sayilar[i];
	}
	printf("Toplam: %d",toplam);
	
	return 0;
}
