#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// 5'e bölünen sayilarý ekrana yazdirma
	int i;
	for(i=0;i<=50;i++)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
		}
	}
	
	// 3 basamaklý sayilari basamaklarýna ayirma
	int a,b;
	printf("3 basamakli bri sayi giriniz:");
	scanf("%d",&a);
	b=a/100;
	a=a%100;
	printf("%d\n",b);
	b=a/10;
	a=a%10;
	printf("%d\n",b);
	printf("%d",a);
	
	return 0;
}
