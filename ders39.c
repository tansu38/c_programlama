#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char kaynak[30]="Merhaba Balikesir";
	char kopya[30]="";
	 
	strcpy(kopya,kaynak);
	printf("%s\n",kopya);
	
	char nereden[30]="Merhaba Ankara";
	char nereye[30]="";
	
	strncpy(nereye,nereden,14);
	printf("%s",nereye);
	
	
	
	
	return 0;
}
