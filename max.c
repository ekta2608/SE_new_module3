
#include<stdio.h>
void main()
{
      int a[6],i,max=0;
      printf("Enter Five Value :");
      for(i=0;i<=6;i++)
          {
            scanf("%d",&a[i]);
          }
          
      for(i=0;i<=6;i++)
          {
              if(a[i]>max)
               {
                    max=a[i]; 
                   
               }      
           }
              printf("Maximum is : %d\n",max) ;                
} 
