
#include <stdio.h>

int main() 
{
   int n,i,j;
   scanf("%d", &n);
   int num = 1;
   for ( i = 1; i <= n; i++) 
   {
        for ( j = 1; j <= i; ++j) 
        {
            printf("%d ", num);
            ++num;
        }
        printf("\n");
   }
   return 0;
}
