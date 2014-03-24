#include <stdio.h>
  int main(void) {
	 
	  float a,b,c;
	  float i,l,k;
	  
	  printf("Enter the amount of the loan:");
	  scanf("%f",&a);
      printf("Enter interested rate:");
      scanf("%f",&b);
      printf("Enter monthly payment:");
      scanf("%f",&c);
      i=(a-c)+(a*b)/1200;
      l=(i-c)+(i*b)/1200;
      k=(l-c)+(l*b)/1200;
      printf("Balance remaining  after first payment:%.2f\n",i);
      printf("Balance remaining  after second  payment:%.2f\n",l);
      printf("Balance remaining  after third  payment:%.2f\n",k);
      return 0;
}

