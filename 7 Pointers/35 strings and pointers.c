/* stringlerin pointerlara uygulanmasý.

*/
#include<stdio.h>
#include<string.h> 

int benimstrlen(char *p){
	
	int uzunluk =0;
	int i=0;
	
	for(;p[i] != '\0';i++){
		
		uzunluk++;
	}
	return uzunluk;
}
int main(){
/*ders 22	sonuna ek olarka null karakteri ekliyor int floatdan farklý c kendi otoamtik koyuyordu stringin{karakter arrayleri (karakter dizleri(strings)} bittiðini anlamak için . 
	char yazi[]="tura";
	't'
	'u'
	'r'
	'a'
	'\0'
*/
	
	char yazi[] = "tura";
	
	char *p = yazi;  //baþa gidip t,u,r,a,\0 diye teker teker bakýp nullý görünce ekrana bastýýroyr.
	printf("%s\n",yazi); 
	printf("%s\n",p+1); //p+1 bir sonraki kutudan baþlýyor gene nullu görene kadar. //p[o] mantýðýnda direkt içine giriyor *p ye.
	printf("%s\n",p+2);
	

	
	// sting.h kütüphanesinin içinde olaný ben yazýyom strlen stringin uzunluðunu veren fonksiyon
		printf("%d\n",strlen(yazi));// yazi adresi veriyordu strlende bu adresten baþlayarak null karektere kadar gitme iþlemini yapýyordu ve bize bu stringin uzunluðunu bastýrýyor
//kedni strlenimizi yazalým þimdi de ama pointer yardýmýyla :
     printf("%d",benimstrlen(yazi)); 
     

	return 0;
}
