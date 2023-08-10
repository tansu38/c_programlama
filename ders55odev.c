#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\user\\Desktop\\kimlik.txt","w");
	
	fputs("Tansu Dogan\n",dosya);
	fputs("30\n",dosya);
	fputs("Erciyes Universitesi\n",dosya);
	fputs("Elektrik-Elektronic Mühendisligi\n",dosya);
	return 0;
}
