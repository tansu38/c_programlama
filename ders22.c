#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Klavyeden girilen en ve boy deðerlerine göre yýldýzlarla dörgen oluþturma
	
	int en,boy,i,j;
	printf("Dortgenini en degerini giriniz: ");
	scanf("%d",&en);
	printf("Dortgenini boy degerini giriniz: ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=en;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	// Boy degeri klavyeden girilen dik üçgeni yýldýzlarla oluþturma
	
	int boy2;
	printf("Dik ucgen icin boy degeri giriniz:");
	scanf("%d",&boy2);
	
	for(i=1;i<=boy2;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
