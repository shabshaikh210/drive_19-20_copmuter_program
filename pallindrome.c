#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,n;
	printf("\nEnter String=");
	scanf("%s",str);
	printf("%s",str);
	ispallindrome(str);
}

void ispallindrome(char str[])
{
	int low,high,len,flag=0;
	low=0;
	len=strlen(str);
	printf("\nLength of String=%d",len);
	low=0;
	high=len-1;
	while(low<high)
	{
	if(str[low]==str[high])
		{
		low++;
		high--;
		}
 
	else if(str[low]!=str[high])
		{
		flag=1;
		break;
		}
	}
	if(flag==0)
	printf("\nIs Pallindrome");
	else
	printf("\nNot pallindrome");
}
