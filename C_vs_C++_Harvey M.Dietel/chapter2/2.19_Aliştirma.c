/*3 sayinin toplami yazan program,ortalma,en kuçuk değer en buyuk değer*/
#include <stdio.h>
   int main(void)
  {
    int sayi1,sayi2,sayi3;
    int toplam=0,ortalama=0;
        
    printf("Lutfen birinci sayi giriniz:");
    scanf("%d",&sayi1);
    printf("Lutfen ikinci sayi giriniz:");
    scanf("%d",&sayi2);
    printf("Lutfen sayi3 sayi giriniz:");
    scanf("%d",&sayi3);
    toplam=sayi1+sayi2+sayi3;
        ortalama=toplam/3;
    printf("toplam=%d\n ortalma=%d\n",toplam,ortalama);    
        if (sayi1<sayi2)
             if(sayi2<sayi3)
               printf("enbuyuk sayi:=%d\n",sayi3);
              
        else
               printf("enbuyuk sayi=%d\n",sayi2);
            
               
              
       else if (sayi1>sayi2)
               if(sayi1>sayi3)
               printf("enbuyuk sayi=:%d",sayi1);
               else
                printf("enbuyuk sayi:=%d\n",sayi3);
                         
                     
        if (sayi1>sayi2)
             if(sayi2>sayi3)
               printf("en kuçuk sayi:=%d\n",sayi3);
              
        else
               printf("en kuçuk  sayi=%d\n",sayi2);
            
               
              
       else if (sayi1<sayi2)
               if(sayi2<sayi3)
               printf("en kuçuk sayi=:%d",sayi1);
               else if(sayi1<sayi3)
                printf("en kuçuk sayi:=%d\n",sayi3);
                else 
                 printf("en kuçuk sayi:=%d\n",sayi1);
                                       
        
        
        
        
        
        
                
      
               
        
  
    return 0;
  }
