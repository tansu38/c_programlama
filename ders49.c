#include <stdio.h>
#include <stdlib.h>

	int toplam(int s1,int s2)
	{
		int s3;
		s3=(s1+s2)*5-10;
		return s3;
	}
	
	

int main() {
	
	int t;
	t=toplam(4,5);
	printf("%d",t);
	
	t=toplam(2,3);
	printf("\n%d",t);
	
	
	return 0;
}
