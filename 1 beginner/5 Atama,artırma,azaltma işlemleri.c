#include<stdio.h>

int main() {
	/*
	Atamalar(deðiþken oluþturup deðer verme),Artýrma,Azaltma Ýþlemleri
	
	Deðiþken(variable) = ifade (expression)
	int x = 15;
	int y = 14;
	x = y;   y nin deðerini x e atacaktýr .
	y = x;
	Örnek:
	int x=6;
	int y=7;
	x=y; (y'nin deðeri x'e atanýyor.x=7, y=7 oluyor.) x'nin içine y'i koymuþ gibi düþenebilirsin y x'e karþýlýk 
	geliyor saðdan sola eþitlik olur.
	
	y=x+1 (x+1 hesaplanýyor(8. y 7 oldu ya)  x=7 ,y=8 bir üst satýrdan dolayý böle oldu.)
	
	y = x+1; (atama durumunda ilk baþta sað taraf hesaplanýr sonra atama yapýlýr.)
	
	!!! x+1 = 2; (Bu tür durumlar C de geçerli deðildir. Sol taraftaki deðer saf bir deðiþken olmalý just x or y.)
	Bunun yerine x = 1; yazmalýsýn.
	
	
	
	Arttýrma, Azaltma Ýþlemler
	i=i+1; sað taraftaki deðer hesaplanýyor sonra i e atanýyor.
	Bunun eþiti ayný zamanda i +=1 (i =i+1 ile ayný þey.)(Deðiþken(i) iþlem(+) = ifade(1))
	
	
	!!!!!!Pratik Yöntem
	i'yi arttýrmak iççin C'de i++ ve ++i gibi þeyler bulunuyor.
	postfix : i++;
	prefix  : ++i;
	Bu iksinin arasýndaki fark :
	int i = 4;
	printf("%d",i++); Ekrana 4 deðerini bastýrýr. Çünkü bu postfix halinde(i++)
	i'nin artmadan önceki deðerini(4) kullanýyor bir sonraki satýrda artýyor.
	printf("%d",++i); Ekrana 5 deðerini bastýrýr. Çünkü prefix halinde(++i)
	i'nin artmýþ deðerini kullanýyor(5) bir sonraki satýrda artýyor.
	i-- ve --i ayný þekilde çalýþýyor.
	
	
	
	
	Deðiþken iþlem=ifade yi biraz açarsak,
	i +=1 (i =i+1 ile ayný þey.)(Deðiþken(i) iþlem(+) = ifade(1))
	
	i = i % a;
	Yukarda dediðimiz forma sokmaya çalýþalým. i %= a;
	Örnek: i = i*(a+1); Eþiti -------> i* =a+1  (iþlem öne geliyor)
	
	
	
	Ýçiçe Atamalar
	
	i = j = k = 0;
	Bu þekilde bir atama varsa en saðdan baþlayarak k'ye 0 atýyor sonra j ye k yý atýyor 0 da sýfýr oluyor böyle gidiyor
	Sonucunda i = 0;
	          j = 0;
			  k = 0;
	Bu þekilde atamalarda en saðdan baþlayarak iþlemler yapýlýr.(Ancak programcýlar bunun daha çok karmaþýk versiyonlarýný tercih etmezler.)
	*/
	
	
	int x= 5;
	int y =7;
	int a =2;
	
	x=y;
	y=x+a+1;
	printf("%d %d %d\n",x,y,a);  // printf("%d %d %d",x,y,a); böyle yazarsan ekrana 7 10 2 basar.		   
	printf("x:%d\ny:%d\n a:%d\n",x,y,a); // %d gibi deðiþkenlerin(veri tiplerinin) baþýna x: koyarsan x: basar ne koyarsan her þeyi basar yani. 
	
	x=4;
	y=5;
	a=6;
	printf("x:%d y:%d a:%d\n",--x,++y,a++);	 // x ve y ekrana iþlem yapýlmýþ haliyle çýkacak ama a ayný deðerle çýkacak a++ yazýnca bir sonraki satýrda deðer artmýþ hali ekrana gelir.
	printf("x:%d y:%d a:%d\n",x,y,a); //burada a 7 olur çünkü bir üst satýrda a++ yazýldý.
	printf("x:%d y:%d a:%d\n",x--,--y,a--); // - ler soldaysa iþlem gerçekleþir sðdaysa bir sonraki satýrda iþlem gerçekleþir.
	
	/*
	x = 2 y =5 a= 6 bir sonraki saýtr için bu deðerler geçerli oluyor
	*/
	
	x += a+1;   // x = x + (a+1) demek x= 2+(6+1) = 9
	printf("x:%d\n",x);
	
	x = y = a+4;
    printf("x:%d y:%d a:%d\n",x,y,a);	
	
	
	
	return 0;
}
