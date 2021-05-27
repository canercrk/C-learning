#include<stdio.h>

int main() {
	/*
	 x+y-------------> x ile y yi toplar   x plus y
	 x-y----------> x ile y yi çıkarır   x minus y
 	 x*y----------->x ile y yi çarpar    x time y or x multiplied by y
 	 x/y------------> x ile y yi böler  x divided by y
 	 
 	 x % y -------> x in y ile bölümünden kalanı veriri
 	 
 	 +x-------> x sayısı artı ile çarpar(sonuç değişmez yani )
 	 -x------> x sayısını - ile çarpar ( x saiyiysi eksi ise artı yapar, artı ise - yapar.)
 	 */
 	 printf("%.1f\n",12.1+9.2 );  //direk işlem yaptırabiliyorsun
	  printf("%d\n",12-9 );
	   printf("%d\n",12*9 );
	    printf("%d\n",12/9 );
	     printf("%d\n",12%9 );
	     
	     int a1 = 5;        //bu şekilde değer atayıp daha sonra toplayabilirsinde burası biraz garip :)
	     int b1 = 8;
	     char c1 = '+';
	     printf("%d %c %d",a1,c1,b1);  //%c ile araya + koydum .d 
	     printf("=");                  //bunun yerine char ilede yukardaki printf e değer belirleyip yazabilirdim. 
	     printf("%d\n",a1+b1);        
 	 
	  
	  int x1 = 1;    //değer atayıo çarpma
 	 int x2 = -1;
	    
	    printf("%d\n",-x1);
	    printf("%d\n",-x2);
		
		printf("%d",x1);
	 
	
	
	
	
	return 0;
}
