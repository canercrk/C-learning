#include<stdio.h>
int main() {
	
	//tek yorum sat�r�.Derleyii bunu g�rmezden gelir
	
	/* �oklu yorum sat�r� bu 
bu aray� istedi�in gibi dolruabilirsin
kafana g�re yani 
    */
    
    
    /*
    De�i�kenler, veri tipleri: de�erleri tutturmak i�in olan yap�lar
    Temel De�i�kenlerimiz; char, int, float, double, short, long
    
    1-char : Karakter de�i�ken veri tipimiz
    2-int: tam say�
    3- float: kesirli say�lar i�in ondal�k felan gibi
    4-double: float�n bir �ss� �ok daha uzayan ondal�k kesirler i�in kullanabilirsiniz
                      daha �ok char,int,float,double kullanacaks�n�z.
    short: intin k�sas�
    long: intin b�y�k de�erlei i�in
    */
    
    
    /*
    Format belirleyici kullan�m� a��a��dakiler i�in �zet bu 
	De�i�ken tan�mlars�n; 
    format belirleyici, de�i�kenad�;  de�i�ken ad� e�itledi�in de�er yani 
    */
    
    /*
    Format Belirleyiciler;
1-    %d----------> int de�eri i�in printf de format belirleyici olarak kullan�l�r i�ine de�er yazd�rmak i�in.
    �r:
  ***  int x = 5;    de�i�ken tan�mlad�n x diye de�eride 5 dedin 
  ***  printf("%d",x); ----------->%d'nin i�ine x'i koymu� gibi d��enebilirsin %d x'e kar��l�k geliyor. Ekrana 5 de�erini yazar bu �ekilde
** %d kullan�lmas�n�n sebebi format belirleyeci bu. d nin anlam� desimal tam say� demek zaten intler i�in bu kullan�l�yor.

2-    %f----------> float ve double i�in format belirleyici olarak kullan�l�r.

      float f= 3.1;
      double d= 4.21; 
      tan�mdal�d���n de�i�kenleri bast�rmak i�inde 
      printf("%f %f",f,d);----------->birinci %f i�ine f ikinci %f i�ine d de�eri geliyor. Ekrana 3.1 , 4.21 basar de�i�kenleri verme s�ras�yla. 
floatda %.1f dersen noktadan sonra gelen sadece 1 de�eri al�r hepsini almaz.

3-    %c------------>karakterler i�in kullan�l�r 
      char c1 = 'c' ; tek t�rnak i�inde karaketeri yaz bunda b�le   
	printf("%c",c1);  -------->ekrana c basar
	
	
4-   %s------>karakter dizileri i�in kullan�l�r. Karakter dizi iki t�rkank aras�ndaki �ey.("Cprogramlama") 

    pirntf("%s","Cprogramlama")---------->ekrana Cprogramalama yazar.
	
	*/
	
	
	
	int a1 = 42;
	char b1 = 'B';
    float c1 = 4.2;
    float x1 = 8.7;
	double d1 = 0.21;
	
	printf("%10d %c %f %.1f %f %s\n",a1,b1,c1,x1,d1, "oluyur mu reyis");	 // a��a��ya bir �ey yazmazsan buraada \n kullanmaya gerek yok ama bir alt sat�ra bir �ey bas�tracaksan
	printf("oluyor tabi amk");                                  // buras� gibi yukarda \n koyman gerekli.
	                                                         /*
															 %1.f ile 8.70000000000 yerine 8.7 yazar pc .
	                                                         %10d dersende 10 bo�luk atar sonra kendini yazar.(T�m format belirleyiciler i�in ge�eri bu)  
	                                                         */
	 	
	return 0;
}
