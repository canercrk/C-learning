#include<stdio.h>
#include<stdlib.h>

/* fibonacci serisi
1,1,2,3,5,8,13,21......

bir önceki sayýyýyla toplamý bir sonrakini veriyor.
*/
int main(){
	
	int ilksayi =1;
	int ikincisayi =1;
	int i;
	
	printf("%d\n%d\n",ilksayi,ikincisayi);
	
   for(i=0; i<12 ;i++){   //i asssagýda isleme koymana gerek yok kendi cinde zaten burada artýyor surekli artmasý bitince assagýdaki ýslemredebitecek.
   	
   	   int temp = ikincisayi; // 1,2,3
   	   
   	   ikincisayi = ikincisayi + ilksayi; //2,3,5  
   	   
   	   ilksayi = temp;  //1, 2, 3
   	   
   	   printf("%d\n",ikincisayi); //2, 3,5 
   }  
	return 0;
}
