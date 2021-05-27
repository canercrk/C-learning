#include<stdio.h>

int main(){
	
	/*
	-x, x+y*z, (x/7)*y, (a % b) - (x*a +1), 3+4*7 gibi ifadeler birer aritmeik ifadedir.
	
	Ýþlem Sýrasý:
	Tekli operatörler: (+) (-) (-x,+x) 1.öncelik kendi aralarýnda saðdan sola
	Ýkili Operaötreler: *, /, % 2. öncelik. Kedni aralarýnda soldan saða
	Ýkili Operaötreler: +,-   3.öncelik. Kendi aralarýnda soldan saða
	
	parantez içleri her zaman ilk planda yapýlýr
	!!!!!!!Matematikle ayný.
	*/
	
	printf("%d\n",2-3+4);
	printf("%d\n",2*3-4);
	printf("%d\n",2-3/4);
	printf("%d\n",2+3%4);
	printf("%d\n",2/3*4);
	printf("%d\n",2%3/4);
	printf("%d\n",-2+3);
	printf("%d\n",2*-3);  
	printf("%d\n",-2*-3);
	printf("%d\n",(2+3)%4);
	
	
	
	
	
	
	
	return 0;
}
