#include <stdio.h>
	int main(void)
{
	int a,b,c;
	int max;
	 scanf("%d%d%d",&a,&b,&c);
	 if(a>b&&a>c)
	    max=a;
	 else if(b>a&&b>c)
	    max=b;
	 else if (c>a&&c>b)
	  max=c;
	  
	 
	 printf("en buyk değer:=%d",max); 		
		 
	return 0;
}