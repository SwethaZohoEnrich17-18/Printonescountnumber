#include<stdio.h>
void main()
{
  int n,count=0;
  scanf("%d",&n);
  while(n)
  {
    n&=(n-1);
    count++;
   }
    printf("%d",count);
 } 
