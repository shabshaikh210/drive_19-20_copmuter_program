#include<stdio.h>
int main()
{
     int a[10],n,i,j,flag=0,prime[10],t=0,k=0;
     printf("How Many Numbers You Want\n ");
     scanf("%d",&n);
     printf("\nEnter Numbers in Array:\n\n");
     for(i=0;i<n;i++)
          scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
          flag=0;
          for(j=2;j<a[i];j++)
          {
               if(a[i]%j==0)
               {
                    flag=1;
                    break;
               }
          }
          if(flag==0)
          {
               prime[t]=a[i];
               t++;
          }
     }
	printf("\nTotal prime%d\t",t);
	
     printf("\nPrime Numbers  Array:\n");
	i=0;
	while(i<t)
	{
	printf("%d\t",prime[i]);
	i++;
	}
  
	printf("\nAlternative prime numbers=\n");
    for(i=0;i<t;i++)
	{
	if(i%2==0)
	printf("%d\t",prime[i]);
	}
     return 0;
}


	

