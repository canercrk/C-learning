/* stringlerin pointerlara uygulanmas�.

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
/*ders 22	sonuna ek olarka null karakteri ekliyor int floatdan farkl� c kendi otoamtik koyuyordu stringin{karakter arrayleri (karakter dizleri(strings)} bitti�ini anlamak i�in . 
	char yazi[]="tura";
	't'
	'u'
	'r'
	'a'
	'\0'
*/
	
	char yazi[] = "tura";
	
	char *p = yazi;  //ba�a gidip t,u,r,a,\0 diye teker teker bak�p null� g�r�nce ekrana bast��royr.
	printf("%s\n",yazi); 
	printf("%s\n",p+1); //p+1 bir sonraki kutudan ba�l�yor gene nullu g�rene kadar. //p[o] mant���nda direkt i�ine giriyor *p ye.
	printf("%s\n",p+2);
	

	
	// sting.h k�t�phanesinin i�inde olan� ben yaz�yom strlen stringin uzunlu�unu veren fonksiyon
		printf("%d\n",strlen(yazi));// yazi adresi veriyordu strlende bu adresten ba�layarak null karektere kadar gitme i�lemini yap�yordu ve bize bu stringin uzunlu�unu bast�r�yor
//kedni strlenimizi yazal�m �imdi de ama pointer yard�m�yla :
     printf("%d",benimstrlen(yazi)); 
     

	return 0;
}
