#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Ýstenilen fibonacci terimini bulma
	
	int a=1,b=1,c,terim,i;
	
	
	printf("Fibonacci serisinin kacinci terimimi bulmak istiyorsunuz:");
	scanf("%d",&terim);
	
	if(terim<3)
	{
		printf("%d. Fibonacci terimi: 1",terim);
	}
	
	else
	{
	
		for(i=3;i<=terim;i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
	
		printf("%d. Fibonacci terimi: %d",terim,c);
	
	}
	
	return 0;
}
