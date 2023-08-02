#include <stdio.h>
#include <stdlib.h>

	struct kayit
	{
		char ad[20];
		int no;
		int sinif;
		float ort;
	};

	struct kayit ogr;

	int main() {
	
	printf("Ad Soyad: ");
	//scanf("%s",&ogr.ad);
	gets(ogr.ad);
	printf("Numara: ");
	scanf("%d",&ogr.no);
	printf("Sinif: ");
	scanf("%d",&ogr.sinif);
	printf("Ortalama: ");
	scanf("%f",&ogr.ort);
	
	printf("\n\n%s\n",ogr.ad);
	printf("%d\n",ogr.no);
	printf("%d\n",ogr.sinif);
	printf("%.2f\n",ogr.ort);
	
	return 0;
}
