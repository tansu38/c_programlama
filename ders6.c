#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Float deðiþkenler
	
	// %f
	
	/*
	float deg1,deg2,toplam;
	deg1=5.85;
	deg2=4.37;
	toplam=deg1+deg2;
	printf("Toplam: %f", toplam);
	*/
	/*
	float s1,s2,s3,ort;
	s1=75;
	s2=80;
	s3=81;
	ort=(s1+s2+s3)/3;
	printf("Sinav ortalamsý: %f",ort);
	*/
	
	printf("Ýdeal Kilo Hesaplama\n\n");
	//ideal kilo
	//(boy-100+yaþ/10) --> kadýn    0,9 ---> erkek
	float boy,yas,ideal;
	
	boy=160;
	yas=30;
	ideal=(boy-100+yas/10)*0.8;
	printf("Ideal Kilo: %f",ideal);
	
	
	return 0;
}
