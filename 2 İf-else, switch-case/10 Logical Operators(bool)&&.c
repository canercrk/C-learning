#include<stdio.h>
/*
Bool Veritipi (true ya da false)

Mant�ksal ifadeler do�ru ise true yanl�� ise false
ayn� zamanda b�t�n 0 olmayan say�lar true de�er say�lar. 0 ise false de�erdir.

Mant�ksal Opertorler
< -----> k���k m�d�r. a < b
> -----> b�y�k m�d�r. a>b
<= -----> k���k yada e�it midir. a<=b
>= ------> b�y�k yada e�it midir. a>=b
== ------> e�it midir. a == b
!= -------> e�it de�il midir. a != b 

Mant�ksal Ba�la�lar
Bir �ok mant�ksal ifadeyi i�lemi ba�layan ara�lard�r

&& ---------> mant�ksal and(ve) ba�lac�. true && ture && false gibi ba�lanabilir. && oldu�u c�mlenin true olmas� i�in b�t�n ifadelerin true olmas� gerekir.
E�er bu c�mlenin i�inde bir tane bile false varsa o mant�ksal c�mle false olur.

// -------> mant�ksal or (ya da) ba�lac�. true // true // false gibi baglan�lab�l�r. // oldugu cumlen�n true olmas� �c�n en az b�r �faden�n true olmas�
gerek�r. Eger mant�ksal or (||) ile baglanm�s cumlen�n �c�nde butun �fadeler false �se o mant�ksal cumle false yan� yanl�s olur.
! --------> mant�ksal not (degili) oparatoru dogru olan (true) olan mant�ksal ifadeyi yanl�s (false) yapar. 

�artl� C�mleler
a = x > y ? x: y;  ?ise demek  x>y ise hepisnin e�iti x oluyor gibi.
*/
int main() {
   /*
   Bir kac al�st�rma
 
 int a =40;
 int b =41;
 a>b  f
 a<b   t 
 a >=b   f
 a <= b    t
 a != b;    t
 a == b ;   f
 */
 
 /*
 int a = 40
 int b = 50
 int c = 60
 int d = 70
 a > c && c <=d && (a > b || b<d)  ilk parantez i�i ba�lar
                      f       t
    f        t            t
               f  olur && ile baglanm�� ��nk� hepsi t olmas� laz�md�
 !(a >=d )
   ! f
   t oldu 
 */
 
 int a,b=20 ,c=30;
 
 a= b< c ? b: c ;   // c b�y�k b ise e�iti b de�ilse c oluyor burada.
 printf("a:%d",a);
	
	return 0;
}
