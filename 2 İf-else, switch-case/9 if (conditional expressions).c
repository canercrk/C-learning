#include<stdio.h>
/*
bool veritipi(de�i�ken) ture ya da false de�erini al�r.True ise if blo�una girer yoksa a��a��daki blo�a devam eder.
 
*/
int main() {
	
	int note;
	printf("Note: ");
	scanf("%d",&note);
	
	if(note > 60){   //girilen de�er 60 dan b�y�kse if in bloguna giriyor ve oradaki i�lemleri yap�yor.{ } bununaras�ndaki k�sma giriyor.
	 
	 printf("Dersten gectiniz");
	  
	}
	else {    // if e girmedi�i durumda buna ge�er 
	
	printf("Dersten kaldiniz");
		
	}
	
	
	return 0;
}
