#include<stdio.h>

int main()
{
    
    int i,j,x,n,a,b,c;
    printf("enter the number");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
     {
        for(j=0;j<n-i;j++)
        {
          printf(" ");
        }
        for(x=1,a=1,b=1,c=0;x<=i;x++)
        {
          a+=c;
          printf("%d",a);
          c=b;
          b=a;
        }
        printf("\n");
    }
}