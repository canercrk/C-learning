#include<stdio.h>   
//donguler yazd���m�z� tekrar kullanmaya yar�yor
int main (){
	/*
	dongumuzu baslatma
	while(kosulu yazars�n){  e�er kosul sa�lan�rsa while bloguna girer
	
	artt�rma yapars�n //sonusuz donguden kurtarmak i�in arttt�r�r�z (yani ilk yapar artar tekrar kontorl eder kosulu taki ki kosulu saglamayana denk.
	kosul true olduu� s�rece dong� devam eder false olacan kadar
    }
    */
	
	int i;   
	
	i = 0;    // i tan�mlad�n ve 0 dan baslatmay� sectin
	
	while(i < 10) {   // i = 0 oldu�u i�in 0,1,2,3...9 a kadar 10 tane yazd�r�yor o yuzden i < 10 yazd�k kosul olarak asssa��da 1 att�rd�k hep.
		printf("%d -Merhaba Dunya\n",i);
		
		i++;
		
	}
	printf("%d -Dongu Bitti",i);
	



	 int n;
	 int fact = 1;
	 printf("Faktoruyel istediginiz sayiyi giriniz: ");
	 scanf("%d",&n);
	 
	 while( n !=0 ){  //n e�it degil 0 olana kadar
	    printf("%d\n",n);
		fact = fact *n;
		
		n--;
		}
	 
	
	
	
	
	return 0;
}
