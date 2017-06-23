#include<stdio.h>

int main()
{
  int i,c,d,t;
  int a[7]={4,23,43,38,15,10,30};
  for(i=0;i<7;i++)
    {
      printf("%d ",a[i]);
    }
  printf("\n");
 
  for (c=1;c<= 6;c++)
    {
      d=c;
      
      while(d >0&&a[d]<a[d-1]) 
	{
	  t = a[d];
	  a[d]= a[d-1];
	  a[d-1] = t; 
	  d--;
	}
    }
  
  printf("Sorted list :\n");
  
  for (c=0;c <= 6;c++)
    {
      printf("%d\n", a[c]);
    }\
  return 0;
  
}
