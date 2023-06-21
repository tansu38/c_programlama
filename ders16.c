#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*
	float sayi1,sayi2,sonuc;
	char islem;
	
	printf("yapmak istediginiz islem sembolunu giriniz:");
	scanf("%s",&islem);
	
	printf("1. sayiyi giriniz:");
	scanf("%f",&sayi1);
	
	printf("2. sayiyi giriniz:");
	scanf("%f",&sayi2);
	
	switch(islem)
	{
		case '+': sonuc=sayi1+sayi2; break;
		case '-': sonuc=sayi1-sayi2; break;
		case '*': sonuc=sayi1*sayi2; break;
		case '/': sonuc=sayi1/sayi2; break;
	}
		printf("Islemin sonucu: %f",sonuc);
	*/


	int num,sayi1,sayi2,son1,son2;

	printf("\n\n\n ***** Matematik Menusu ******\n\n");
	printf("1- Karede Alan ve Cevre hesabi\n");
	printf("2- Bir Sayinin Kubunu Hesaplama\n");
	printf("3- Cemberde Alan ve Cevre Hesabi\n");
	printf("4- 5x^2 + 7x + 9 ifadesini girilen x degerine göre hesaplama\n");
	printf("5- Dikdortgende Alan ve Cevre hesabi\n******************\n");
	printf("Yapmak isteginiz islemin numarasini giriniz:");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("Karenin kenar uzunlugunu giriniz:");
			scanf("%d",&sayi1);
			son1=sayi1*sayi1;
			son2=sayi1*4;
			printf("Karenin Alana: %d\nKarenin Cevresi: %d",son1,son2);
			break;
		case 2:
			printf("Kupunu hesaplamak istediginiz sayiyi giriniz:");
			scanf("%d",&sayi1);
			son1=sayi1*sayi1*sayi1;
			printf("Sayinin Alani: %d",son1);
			break;
		case 3:
			printf("Cemberin yaricap degerini giriniz:");
			scanf("%d",&sayi1);
			son1=3.14*sayi1*sayi1;
			son2=2*3.14*sayi1;
			printf("Cemberini Alani: %d\nCemberin Cevresi: %d",son1,son2);
			break;
		case 4:
			printf("x degerini giriniz:");
			scanf("%d",&sayi1);
			son1=5*sayi1*sayi1+7*sayi1+9;
			printf("Sonuc: %d",son1);
			break;
		case 5:
			printf("Dikdorgenin uzun kenarini giriniz:");
			scanf("%d",&sayi1);
			printf("Dikdorgenin kisa kenarini giriniz:");
			scanf("%d",&sayi2);
			son1=sayi1*sayi2;
			son2=2*sayi1+2*sayi2;
			printf("Dikdorgenini Alani: %d\nDikdorgenin Cevresi: %d",son1,son2);
			break;
		default :
			printf("Hatali Giris yaptiniz!");
			break;
			
	}
	
	
	return 0;
}
