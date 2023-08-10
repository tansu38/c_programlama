#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\user\\Desktop\\bilgi2.txt","w");
	
	putc('a',dosya);
	putc('\n',dosya);
	putc('b',dosya);
	return 0;
}
