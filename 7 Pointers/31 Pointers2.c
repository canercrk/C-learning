#include<stdio.h>

int main(){
	
	int a=5,*ap; // adresi tutacak pointer. *ap adresdir. a=5 deyip adreside *ap diye tan�ml�yorusn.
	float b = 3.2,*bp;   //*p siz olmaz kar��mas�n diye *ap diyok.
	double c=3.412,*cp;
	char d = 'a',*dp;
	
	int sayilar[5]={1,2,3,4,5},*arrayp;   
	
	// int *arrayp; b�yle ayr� yapsanda olurdu   
	
	ap=&a;
	bp=&b;
	cp=&c;   //konumunu veriyor
	dp=&d;
	arrayp=&sayilar[1];
	
	printf("%p adresindeki intin degeri %d dir\n",ap,*ap);        // ap d�z *ap i�ine girer
	printf("%p adresindeki float degeri %f dir\n",bp,*bp);
	printf("%p adresindeki double degeri %f dir\n",cp,*cp);
	printf("%p adresindeki cahrin degeri %c dir\n",dp,*dp);
	printf("%p adresindeki sayilarin elemani degeri %d dir\n",arrayp,*arrayp);
	
}
