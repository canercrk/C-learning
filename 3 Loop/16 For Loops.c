#include<stdio.h>
int main() {
	
	int i;       // dongu degisgekin belirliyosun her zamna oldugu gibi
	int j;
	int a;
	for(i=0,j=1 ; i<10 && j <11 ; i++,j++){  // ilk bast doongu degiskeni baslat ; && de ikisi ortak || olsayd� arada biri dogru olmas� yeterli devame derdi yazmaya.
	    
		printf("%d\n",i);                // dongunun mant�k cumlesi dongu ne oldugu zaman dongu devam etsin ( i<10 dolugu surece dongu devam etsin.)
	    printf("i :%d j: %d\n",i,j);    // ve dongunun sonuna geldiinde bu dongu degiskeni ne kadar artaca��n� soluyorsun.
		                               //daha sonra blogu var for dongu devam ettigi surece islem devam edecek icine her seyi yazbilirsin bu blogun.blogun icine i yi koymanad gerek yok o arkada say�yor zaten.
		   for( a = 0 ; a<5 ; a++){    
		  
		     printf("a:%d\n",a);    //bu donguye giriyor bu dongu bitene kadar yukardaki for a girmiyor.
		                    
		
	       }  //a bu suslu paratnee gelince art�yor. ve yukarda kontrol ediliyor. bitince bir ass�gadaki paranteze gecip ilk fora gidiyor.
	
    }  //i ve j bu suslu paratnee gelince art�yor. ve yukarda kontrol ediliyor.  
	return 0;
}
