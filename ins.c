#include<stdio.h>
int c,d,t,n,i;

int sort(int *a,int n)
{
  for (c=1;c<= n-1;c++)
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
  
  for (c=0;c <= n-1;c++)
    {
      printf("%d ", a[c]);
    }
  printf("\n");
}

int read(int *a)
{
 printf("Enter size\n");
  scanf("%d",&n);
 printf("Enter elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("\n");
  return n;
}

int main()
{
  int a[10],n;
  for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
  printf("\n");
  n=read(a);
  sort(a);
  return 0;
}
