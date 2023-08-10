#include <stdio.h>
#include <stdlib.h>

	int toplam(int s1,int s2)
	{
		int toplam=s1+s2;
		return toplam;
	}

int main() {
	
	int t1,t2,t3;
	
	printf("1. sayiyi giriniz: ");
	scanf("%d",&t1);
	printf("2. sayiyi giriniz: ");
	scanf("%d",&t2);
	
	t3=toplam(t1,t2);
	
	printf("Sayilarin toplami: %d",t3);	
	
	return 0;
}
