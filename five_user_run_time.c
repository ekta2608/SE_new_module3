
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char c[10][20],temp[20];
  int i,j,n;
  printf("\nEnter number of strings: ");
  scanf("%d",&n);
  printf("\nEnter the strings: ");
  for(i=0;i<=n;i++)
{
  gets(c[i]); // scanf()
}
  puts(c[i]); // printf()
  for(i=0;i<=n;i++)
{
  for(j=i+1;j<=n;j++)
{
  if(strcmp(c[i],c[j])>0)
 {
  strcpy(temp,c[i]); // inbuilt function of string
  strcpy(c[i],c[j]);
  strcpy(c[j],temp);
 }
}
}
  printf("\nSorted list is:\n");
  for(i=0;i<=n;i++)
  printf("\n%s",c[i]);
  
}
