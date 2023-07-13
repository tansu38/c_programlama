#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// ornek 1: Klavyeden taban sayisi girilen dik ucgenin yildiz(*) sembolu ile çizdirilen program
	
	int i,j,taban;
	
	printf("Dik ucgenin taban olcusunu giriniz:");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	// Ornek 2: 1+5+9+13+...+81 dizisinin toplamini bulan program
	
	int toplam=0;
	
	for(i=1;i<=81;i+=4)
	{
		toplam= toplam+i;
	}
	printf("Sayilarin Toplami: %d",toplam);
	
	// Skor tablosunun tutuldugu diziden toplam puan hesaplama.
	// "2" galibiyet,"1"maglubiyet,"0" beraber.
	//Galibiyet 3 puan, beraberlik 1 puan, maglubiyet 0 puan.
	// 12 Puan alýrsa küme dusmuyor.
	
	int dizi[10]={2,1,0,0,2,1,1,2,1,0};
	int skor=0;
	
	for(i=0;i<10;i++)
	{
		if(dizi[i]==2)
		{
			skor=skor+3;
		}
		if(dizi[i]==0)
		{
			skor=skor+1;
		}
		
	}
	if(skor>=12)
	{
		printf("\nToplam Puan: %d, Kumede kaldi.",skor);	
	}
	else
	{
		printf("\nToplam Puan: %d, Küme dustu.",skor);
	}
	return 0;
}
