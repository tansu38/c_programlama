#include <stdio.h>
#include <stdlib.h>

	struct kitapbilgi
	{
		
		char kitapad[20];
		char yazar[20];
		int fiyat;
		float puan;
	};

	int main() {
	
	struct kitapbilgi kb={"sekerportakali","Vasconceulos",10,7.2};
	
	printf("Kitap ad: %s\n",kb.kitapad);
	printf("Yazar: %s",kb.yazar);
	printf("Fiyari: %d\n",kb.fiyat);
	printf("Puani: %.2f",kb.puan);
	return 0;
}
