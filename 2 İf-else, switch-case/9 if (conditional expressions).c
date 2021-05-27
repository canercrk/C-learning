#include<stdio.h>
/*
bool veritipi(deðiþken) ture ya da false deðerini alýr.True ise if bloðuna girer yoksa aþþaðýdaki bloða devam eder.
 
*/
int main() {
	
	int note;
	printf("Note: ");
	scanf("%d",&note);
	
	if(note > 60){   //girilen deðer 60 dan büyükse if in bloguna giriyor ve oradaki iþlemleri yapýyor.{ } bununarasýndaki kýsma giriyor.
	 
	 printf("Dersten gectiniz");
	  
	}
	else {    // if e girmediði durumda buna geçer 
	
	printf("Dersten kaldiniz");
		
	}
	
	
	return 0;
}
