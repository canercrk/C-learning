#include<stdio.h>
//call by value deðerle çaðýrmak deðerin bilgisi gidiyor.

void degeredegistir(int a,int b){  //birþe yödnemsini istemiyorum void dedim
				  /*bu parametreler sadec fonksiyon çalýþtýðý sürece var oluyor ve bunarla local deðiþkenler adý veriliyor
				  fonksyion bitince a ile b yok oluyor
				   x ve y deki deðerler oluþan a ile b nin içine gidiyor a=5 b=10 olarak */
	int gecici = a;
	
	a = b;
	
	b= gecici ;  //burada a=10 b=5 oluyor.
	printf("a:%d b:%d\n",a,b);	
	
}

int main(){
	
	int x = 5, y=10;      // 5 10 deðerlerini oluþtuuyor 
	
	degeredegistir(x,y);    //deðiþtire gidib  x ve y deki deðerler kopyalanarak oluþan a ile b nin içine gidiyor
	                // yukardaki iþlemler yapýnca geri dönüp print f den devam ediyor fonksiyon da bittiði için a ile b deðerleri yok oluyor.
	                //belleðimizde sadece x ve y kalýyor. X ile deðerleri a ile be ye atmaktan baþka hiç bir þey yapmadýk bu yüzden deðerleri hiç deðiþmedi.
	                //bu yöntemin adýna call by value(sadece deðerler kopyalanýyor .
	printf("x:%d y:%d  ",x,y);

	return 0;
}
