#include <stdio.h>
int power(int base,int n)
{
	int i,p;
	p=1;
	for(i=1;i<=n;i++)
	p=p*base;
	return p;
}

 
	 
 int main(void)

 {
 	int a;
 	for(a=1;a<11;a++)
 	printf("%d\t%d\t%d\n",a,power(a,2),power(a,3)) ;
 	

 	return 0;
 }
 
