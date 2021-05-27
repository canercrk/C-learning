#include<stdio.h>
int main() {
	
	//tek yorum satýrý.Derleyii bunu görmezden gelir
	
	/* çoklu yorum satýrý bu 
bu arayý istediðin gibi dolruabilirsin
kafana göre yani 
    */
    
    
    /*
    Deðiþkenler, veri tipleri: deðerleri tutturmak için olan yapýlar
    Temel Deðiþkenlerimiz; char, int, float, double, short, long
    
    1-char : Karakter deðiþken veri tipimiz
    2-int: tam sayý
    3- float: kesirli sayýlar için ondalýk felan gibi
    4-double: floatýn bir üssü çok daha uzayan ondalýk kesirler için kullanabilirsiniz
                      daha çok char,int,float,double kullanacaksýnýz.
    short: intin kýsasý
    long: intin büyük deðerlei için
    */
    
    
    /*
    Format belirleyici kullanýmý aþþaðýdakiler için özet bu 
	Deðiþken tanýmlarsýn; 
    format belirleyici, deðiþkenadý;  deðiþken adý eþitlediðin deðer yani 
    */
    
    /*
    Format Belirleyiciler;
1-    %d----------> int deðeri için printf de format belirleyici olarak kullanýlýr içine deðer yazdýrmak için.
    ör:
  ***  int x = 5;    deðiþken tanýmladýn x diye deðeride 5 dedin 
  ***  printf("%d",x); ----------->%d'nin içine x'i koymuþ gibi düþenebilirsin %d x'e karþýlýk geliyor. Ekrana 5 deðerini yazar bu þekilde
** %d kullanýlmasýnýn sebebi format belirleyeci bu. d nin anlamý desimal tam sayý demek zaten intler için bu kullanýlýyor.

2-    %f----------> float ve double için format belirleyici olarak kullanýlýr.

      float f= 3.1;
      double d= 4.21; 
      tanýmdalýdýðýn deðiþkenleri bastýrmak içinde 
      printf("%f %f",f,d);----------->birinci %f içine f ikinci %f içine d deðeri geliyor. Ekrana 3.1 , 4.21 basar deðiþkenleri verme sýrasýyla. 
floatda %.1f dersen noktadan sonra gelen sadece 1 deðeri alýr hepsini almaz.

3-    %c------------>karakterler için kullanýlýr 
      char c1 = 'c' ; tek týrnak içinde karaketeri yaz bunda böle   
	printf("%c",c1);  -------->ekrana c basar
	
	
4-   %s------>karakter dizileri için kullanýlýr. Karakter dizi iki týrkank arasýndaki þey.("Cprogramlama") 

    pirntf("%s","Cprogramlama")---------->ekrana Cprogramalama yazar.
	
	*/
	
	
	
	int a1 = 42;
	char b1 = 'B';
    float c1 = 4.2;
    float x1 = 8.7;
	double d1 = 0.21;
	
	printf("%10d %c %f %.1f %f %s\n",a1,b1,c1,x1,d1, "oluyur mu reyis");	 // aþþaðýya bir þey yazmazsan buraada \n kullanmaya gerek yok ama bir alt satýra bir þey basýtracaksan
	printf("oluyor tabi amk");                                  // burasý gibi yukarda \n koyman gerekli.
	                                                         /*
															 %1.f ile 8.70000000000 yerine 8.7 yazar pc .
	                                                         %10d dersende 10 boþluk atar sonra kendini yazar.(Tüm format belirleyiciler için geçeri bu)  
	                                                         */
	 	
	return 0;
}
