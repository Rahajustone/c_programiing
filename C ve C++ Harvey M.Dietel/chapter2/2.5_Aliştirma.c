/*3 sayinin toplami yazan program*/
#include <stdio.h>
   int main(void)
  {
  	int sayi1,sayi2,sayi3;
  	int toplam;
  	printf("Lutfen birinci sayi giriniz:");
  	scanf("%d",&sayi1);
  	printf("Lutfen ikinci sayi giriniz:");
  	scanf("%d",&sayi2);
  	printf("Lutfen sayi3 sayi giriniz:");
  	scanf("%d",&sayi3);
  	toplam=sayi1+sayi2+sayi3;
  	printf("toplam=%d\n",toplam);
  	return 0;
  }