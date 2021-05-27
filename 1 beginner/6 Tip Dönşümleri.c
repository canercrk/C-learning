#include<stdio.h>
int main() {
	
	/* Tip Dönüþümleri
	Otomatik Dönüþümler
	Örnepin bir aritmetik ifadede bütün tipler ayný deðildirç Mesala 3.2/2 dediðimiz zaman float ve int beraber oluyor.
	burada sonuç 1.6 olacaktýr çünkü otomatik bir dönüþüm yapýþýyorç(2 sayýsý float a çevrilip 2.0 oluyor aslýnda.)
	
	Otomatik Dönüþüm Çizelgesi : saða doðru oto çevriliyor.
	char
	short ------------> int----------> float -----------> double ----->long
	                                                                   double
	                                                                   
Mesala int ve double beraberse herkes double'a otomatik olarak çevriliyor.(saða doður öncelik arýtoyrç)
	
	Manuel Dönüþümler
	Otomatik dönüþümlerin olmadýðý yerlerde kednimiz yapabiliriz.
	
	3.2 sayýsýný int yapmak istersek ----------> (int) 3.2 --------> 3 sonucunu verir.(Kesirli kýsmý atar.)
	*/
	
	int x = 3;
	float y = 0.1;
	printf("%f\n",x/y);
	
	printf("%f\n",2*4.2 + 4%2); // f deyince oto 4.0000 der öyle iþkem yapar
	printf("%f\n",12.5/2);
	printf("%d\n",(int)3.2);     // int yapar noktayý atar öyle iþlem yapar 
	printf("%f\n",(float)3);
	
	
	                                                               	
	
	return 0;
}
