#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *metinbelgesi;
	char veri1[30]="Elektrik-Elektronik ";
	char veri2[30]="Mehendisligi ";
	char veri3[20]="Bolumu";
	
	metinbelgesi=fopen("C:\\Users\\user\\Desktop\\bilgi58.txt","w");
	fputs(veri1,metinbelgesi);
	fputs(veri2,metinbelgesi);
	fputs(veri3,metinbelgesi);
	
	return 0;
}
