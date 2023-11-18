 #include <stdio.h> 
  
int main() 
{ 
    int rows = 5,i,j;
    // first loop for printing rows 
    for (i=0;i<rows;i++) 
	{ 
      // second loop for printing alphabets in each rows 
        for (j=0;j<=i;j++)
		{ 
            printf("%c ", 'A' + j); 
        } 
        printf("\n"); 
    } 
    
}
