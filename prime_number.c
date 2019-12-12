#include <stdio.h>

int
main ()
{
  int n, i,j,c,a=1,k;
  scanf ("%d", &n);
  printf("2 ");
  for (i = 1; i <= n; i++)
    {
      for (i = 2; i <=100; i++)
	{
	  for (j = 2; j <= i-1; j++)
	    {
	      if (i >= j)
		{
		  if (i % j == 0)
		    { c=0;
		      break;
		    }
		  c=1;
		}
		}
	    if(c==1){
		   if(a==n)
		   break;
		   else{
		        printf("%d ",i);
		        a++;}
		}
	}
  }
  return 0;
}
