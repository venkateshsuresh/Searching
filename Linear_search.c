#include <stdio.h>
int main()
{
   int a[20];int n,i,c,k=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d ",&a[i]);
   }
   scanf("%d",&c);
   for(i=1;i<=n;i++)
   {
       if(c==a[i])
       {   k=1;
           printf("%d",i);
           break;
       }     
   }    
   if(k==0)
   {
       printf("Element not found");
       
   }
   return 0;
}
