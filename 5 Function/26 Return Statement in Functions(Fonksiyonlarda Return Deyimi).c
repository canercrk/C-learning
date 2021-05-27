#include<stdio.h>
/*
void hatayibas(int hata){ void fonk dýþ dünyaya bu fonksiyon içindeki iþlemler sonucunda hiiç bir þey dönmediði anlamýna geliyor
	
	}
	int main(){
	
		hatayibas(404) sadecede gidiyor bu fonksiyonu çalýþtýyor ve bunun bir dönme deðeri olmadýðý için bunu kullanmayýtouz
	
		dýþ dünyaya döndürme ise þöyle oluyor
	
		return 0;
	}
	
dýþ dünyaya döndürme ise þöyle oluyor:

*/
//topla fonksiyonu 2 aparmetre alacak ve iþleme alýnmasýnda çýkan sonucu çaðýrdýðýmýz yerdeki fonksiyona geri gelcek

int topla(int sayi1,int sayi2){
	
	return (sayi1+sayi2); //dýþ dünyaya deðeri atmak için gerekli
	//ayrýca toplamlarý tam sayý olacaðý için dönüþ tipi int oldu eðer float sonucu çýksaydý float olurdu.
	
}

int main() {
	
	int sayi1, sayi2;
	
	scanf("%d %d",&sayi1,&sayi2);
	
	printf("Iki sayinin toplami %d",topla(sayi1,sayi2));
	
	return 0;
}
