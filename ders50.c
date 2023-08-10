#include <stdio.h>
#include <stdlib.h>

	int kupbul(int sayi)
	{
		int sonuc=sayi*sayi*sayi;
		return sonuc;
	}
	
	void dortgen(int kisa,int uzun)
	{
		int i,j;
		for(i=0;i<uzun;i++)
		{
			for(j=0;j<kisa;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}


int main() {
	
	int s;
	printf("Sayiyi giriniz: ");
	scanf("%d",&s);
	printf("\nSayinin kupu: %d\n\n",kupbul(s));
	
	dortgen(6,4);
	
	
	return 0;
}
