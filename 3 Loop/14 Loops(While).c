#include<stdio.h>   
//donguler yazdýðýmýzý tekrar kullanmaya yarýyor
int main (){
	/*
	dongumuzu baslatma
	while(kosulu yazarsýn){  eðer kosul saðlanýrsa while bloguna girer
	
	arttýrma yaparsýn //sonusuz donguden kurtarmak için artttýrýrýz (yani ilk yapar artar tekrar kontorl eder kosulu taki ki kosulu saglamayana denk.
	kosul true olduuð sürece dongü devam eder false olacan kadar
    }
    */
	
	int i;   
	
	i = 0;    // i tanýmladýn ve 0 dan baslatmayý sectin
	
	while(i < 10) {   // i = 0 olduðu için 0,1,2,3...9 a kadar 10 tane yazdýrýyor o yuzden i < 10 yazdýk kosul olarak asssaðýda 1 attýrdýk hep.
		printf("%d -Merhaba Dunya\n",i);
		
		i++;
		
	}
	printf("%d -Dongu Bitti",i);
	



	 int n;
	 int fact = 1;
	 printf("Faktoruyel istediginiz sayiyi giriniz: ");
	 scanf("%d",&n);
	 
	 while( n !=0 ){  //n eþit degil 0 olana kadar
	    printf("%d\n",n);
		fact = fact *n;
		
		n--;
		}
	 
	
	
	
	
	return 0;
}
