#include<stdio.h>

int main() {
	/*
	 x+y-------------> x ile y yi toplar   x plus y
	 x-y----------> x ile y yi ��kar�r   x minus y
 	 x*y----------->x ile y yi �arpar    x time y or x multiplied by y
 	 x/y------------> x ile y yi b�ler  x divided by y
 	 
 	 x % y -------> x in y ile b�l�m�nden kalan� veriri
 	 
 	 +x-------> x say�s� art� ile �arpar(sonu� de�i�mez yani )
 	 -x------> x say�s�n� - ile �arpar ( x saiyiysi eksi ise art� yapar, art� ise - yapar.)
 	 */
 	 printf("%.1f\n",12.1+9.2 );  //direk i�lem yapt�rabiliyorsun
	  printf("%d\n",12-9 );
	   printf("%d\n",12*9 );
	    printf("%d\n",12/9 );
	     printf("%d\n",12%9 );
	     
	     int a1 = 5;        //bu �ekilde de�er atay�p daha sonra toplayabilirsinde buras� biraz garip :)
	     int b1 = 8;
	     char c1 = '+';
	     printf("%d %c %d",a1,c1,b1);  //%c ile araya + koydum .d 
	     printf("=");                  //bunun yerine char ilede yukardaki printf e de�er belirleyip yazabilirdim. 
	     printf("%d\n",a1+b1);        
 	 
	  
	  int x1 = 1;    //de�er atay�o �arpma
 	 int x2 = -1;
	    
	    printf("%d\n",-x1);
	    printf("%d\n",-x2);
		
		printf("%d",x1);
	 
	
	
	
	
	return 0;
}
