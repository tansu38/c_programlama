#include <stdio.h>
#include <stdlib.h>

enum sehirler
{
	hatali,adana,adiyaman,afyon,agri,amasya,ankara,antalya,artvin,balikesir
};

int main() {
	
	enum sehirler il;
	il=amasya;
	printf("%d",il);
	
	return 0;
}
