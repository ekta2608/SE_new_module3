#include<stdio.h>
 int main() 
{ 
    int rows = 5,i,j;
    char n = 'A'; 
  
    // outer loop to print all rows 
    for (i=0;i<rows;i++) 
	{
	// innter loop to print abphabet in each row 
        for (j=0;j<=i;j++)
		 { 
            printf("%c ", n++); 
        } 
        printf("\n"); 
    } 
   
}
