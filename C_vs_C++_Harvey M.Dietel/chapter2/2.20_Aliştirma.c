/*Bir çemberi yariçapi alan ve çemberin çapini*/
#include <stdio.h>
  int main(void)

 {
 	const float p=3.14;
 	float r,Alan,cevre;
 	printf("Lutfen cemberin yariçapi giriniz:");
    scanf("%f",&r);
    
 	Alan=p*r*r;
 	cevre=2*p*r;
 	printf("Alan:=%.2f\n Çevre=%.2f\n",Alan,cevre);


 	return 0;
 }
