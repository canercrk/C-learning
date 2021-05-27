#include<stdio.h>
/*
Bool Veritipi (true ya da false)

Mantýksal ifadeler doðru ise true yanlýþ ise false
ayný zamanda bütün 0 olmayan sayýlar true deðer sayýlar. 0 ise false deðerdir.

Mantýksal Opertorler
< -----> küçük müdür. a < b
> -----> büyük müdür. a>b
<= -----> küçük yada eþit midir. a<=b
>= ------> büyük yada eþit midir. a>=b
== ------> eþit midir. a == b
!= -------> eþit deðil midir. a != b 

Mantýksal Baðlaçlar
Bir çok mantýksal ifadeyi iþlemi baðlayan araçlardýr

&& ---------> mantýksal and(ve) baðlacý. true && ture && false gibi baðlanabilir. && olduðu cümlenin true olmasý için bütün ifadelerin true olmasý gerekir.
Eðer bu cümlenin içinde bir tane bile false varsa o mantýksal cümle false olur.

// -------> mantýksal or (ya da) baðlacý. true // true // false gibi baglanýlabýlýr. // oldugu cumlenýn true olmasý ýcýn en az býr ýfadenýn true olmasý
gerekýr. Eger mantýksal or (||) ile baglanmýs cumlenýn ýcýnde butun ýfadeler false ýse o mantýksal cumle false yaný yanlýs olur.
! --------> mantýksal not (degili) oparatoru dogru olan (true) olan mantýksal ifadeyi yanlýs (false) yapar. 

Þartlý Cümleler
a = x > y ? x: y;  ?ise demek  x>y ise hepisnin eþiti x oluyor gibi.
*/
int main() {
   /*
   Bir kac alýstýrma
 
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
 a > c && c <=d && (a > b || b<d)  ilk parantez içi baþlar
                      f       t
    f        t            t
               f  olur && ile baglanmýþ çünkü hepsi t olmasý lazýmdý
 !(a >=d )
   ! f
   t oldu 
 */
 
 int a,b=20 ,c=30;
 
 a= b< c ? b: c ;   // c büyük b ise eþiti b deðilse c oluyor burada.
 printf("a:%d",a);
	
	return 0;
}
