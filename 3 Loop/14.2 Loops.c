#include<stdio.h>

int main() {
	 int n;
	 int fact = 1;
	 printf("Faktoruyel istediginiz sayiyi giriniz: ");
	 scanf("%d",&n);
	 
	 while( n !=0 ){  //n e�it degil 0 olana kadar
	    printf("%d\n",n);
		fact = fact *n;  // ilk basta fact deger 1 ama girdigi say�ya esitleniyor ve her dng�de 1 azal�yor n ve carp�lp�p yeni fact oluor taki dongu bozulana kadar.
		
	
		n--;
		}
	 printf("%d",fact);
	
	return 0;
}
