#include<stdio.h>
//call by value de�erle �a��rmak de�erin bilgisi gidiyor.

void degeredegistir(int a,int b){  //bir�e y�dnemsini istemiyorum void dedim
				  /*bu parametreler sadec fonksiyon �al��t��� s�rece var oluyor ve bunarla local de�i�kenler ad� veriliyor
				  fonksyion bitince a ile b yok oluyor
				   x ve y deki de�erler olu�an a ile b nin i�ine gidiyor a=5 b=10 olarak */
	int gecici = a;
	
	a = b;
	
	b= gecici ;  //burada a=10 b=5 oluyor.
	printf("a:%d b:%d\n",a,b);	
	
}

int main(){
	
	int x = 5, y=10;      // 5 10 de�erlerini olu�tuuyor 
	
	degeredegistir(x,y);    //de�i�tire gidib  x ve y deki de�erler kopyalanarak olu�an a ile b nin i�ine gidiyor
	                // yukardaki i�lemler yap�nca geri d�n�p print f den devam ediyor fonksiyon da bitti�i i�in a ile b de�erleri yok oluyor.
	                //belle�imizde sadece x ve y kal�yor. X ile de�erleri a ile be ye atmaktan ba�ka hi� bir �ey yapmad�k bu y�zden de�erleri hi� de�i�medi.
	                //bu y�ntemin ad�na call by value(sadece de�erler kopyalan�yor .
	printf("x:%d y:%d  ",x,y);

	return 0;
}
