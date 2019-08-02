#include<stdio.h>
void atleast_2_greater(int array[],int n);
 int main()
{
	int array[100],n,i;
	printf("How many Elements you want in array?\n");
	scanf("%d",&n);
	printf("Accept Array Element\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	}
	printf("Array with element which has atleast 2 greater elements=\n");
	atleast_2_greater(array,n);
    return 0;
}

void atleast_2_greater(int array[], int n)
{
	int i,cnt;
	 for(i=0; i<n; i++)
    	  {
        	cnt = 0;
        	for (int j=0; j<n; j++)
            		if (array[j] > array[i])
                	cnt++;

        		if (cnt >= 2)
            		printf("%d\t",array[i]);
    	  }
}

