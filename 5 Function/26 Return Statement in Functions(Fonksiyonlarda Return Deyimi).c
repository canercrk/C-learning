#include<stdio.h>
/*
void hatayibas(int hata){ void fonk d�� d�nyaya bu fonksiyon i�indeki i�lemler sonucunda hii� bir �ey d�nmedi�i anlam�na geliyor
	
	}
	int main(){
	
		hatayibas(404) sadecede gidiyor bu fonksiyonu �al��t�yor ve bunun bir d�nme de�eri olmad��� i�in bunu kullanmay�touz
	
		d�� d�nyaya d�nd�rme ise ��yle oluyor
	
		return 0;
	}
	
d�� d�nyaya d�nd�rme ise ��yle oluyor:

*/
//topla fonksiyonu 2 aparmetre alacak ve i�leme al�nmas�nda ��kan sonucu �a��rd���m�z yerdeki fonksiyona geri gelcek

int topla(int sayi1,int sayi2){
	
	return (sayi1+sayi2); //d�� d�nyaya de�eri atmak i�in gerekli
	//ayr�ca toplamlar� tam say� olaca�� i�in d�n�� tipi int oldu e�er float sonucu ��ksayd� float olurdu.
	
}

int main() {
	
	int sayi1, sayi2;
	
	scanf("%d %d",&sayi1,&sayi2);
	
	printf("Iki sayinin toplami %d",topla(sayi1,sayi2));
	
	return 0;
}
