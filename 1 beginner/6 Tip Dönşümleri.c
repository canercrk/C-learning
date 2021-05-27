#include<stdio.h>
int main() {
	
	/* Tip D�n���mleri
	Otomatik D�n���mler
	�rnepin bir aritmetik ifadede b�t�n tipler ayn� de�ildir� Mesala 3.2/2 dedi�imiz zaman float ve int beraber oluyor.
	burada sonu� 1.6 olacakt�r ��nk� otomatik bir d�n���m yap���yor�(2 say�s� float a �evrilip 2.0 oluyor asl�nda.)
	
	Otomatik D�n���m �izelgesi : sa�a do�ru oto �evriliyor.
	char
	short ------------> int----------> float -----------> double ----->long
	                                                                   double
	                                                                   
Mesala int ve double beraberse herkes double'a otomatik olarak �evriliyor.(sa�a do�ur �ncelik ar�toyr�)
	
	Manuel D�n���mler
	Otomatik d�n���mlerin olmad��� yerlerde kednimiz yapabiliriz.
	
	3.2 say�s�n� int yapmak istersek ----------> (int) 3.2 --------> 3 sonucunu verir.(Kesirli k�sm� atar.)
	*/
	
	int x = 3;
	float y = 0.1;
	printf("%f\n",x/y);
	
	printf("%f\n",2*4.2 + 4%2); // f deyince oto 4.0000 der �yle i�kem yapar
	printf("%f\n",12.5/2);
	printf("%d\n",(int)3.2);     // int yapar noktay� atar �yle i�lem yapar 
	printf("%f\n",(float)3);
	
	
	                                                               	
	
	return 0;
}
