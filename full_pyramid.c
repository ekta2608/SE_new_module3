
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        //P1 start here
        //first we print spaces n-i times
        for(j=1;j<= n-i;j++)
        {
            printf("  ");
        }
        for(j=i;j<2*i;j++)
        {
            printf("* ");
        }
        //P2 starts here
        for(j=1;j<=i-1;j++)
        {
            printf("* ");
        }
        //we finish each row and then print a new line
        printf("\n");
    }
   
}
