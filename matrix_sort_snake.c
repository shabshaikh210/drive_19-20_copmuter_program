#include<stdio.h>
#define MAX 100
void print2d(int a[MAX][MAX],int r,int c);
void print1d(int b[MAX],int n);
int sort(int b[MAX],int n);
int sort(int b[MAX],int n);
void c2dto1d(int a[MAX][MAX],int n,int r,int c);
void c1dto2d(int b[MAX],int n,int r,int c);
void snakepattern(int a[MAX][MAX],int r,int c);

int main(void)
{
        int a[MAX][MAX],i,j,r,c;
        printf("\nHow many Rows?");
        scanf("%d",&r);
        printf("How many Columns?");
        scanf("%d",&c);

        int n=r*c;
        int b[n];

        printf("\nAccept 2D matrix=\n");
        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
        scanf("%d",&a[i][j]);
        }
        }
        printf("\n2D matrix=\n");
        print2d(a,r,c);
        printf("\n2d to 1D conversion=\n");
        c2dto1d(a,n,r,c);
return 0;

}
void print2d(int a[MAX][MAX],int r,int c)
{
        int i,j;
         for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
                printf("%d\t",a[i][j]);
        }

        printf("\n");
        }

}

void print1d(int b[MAX],int n)
{
        for(int k=0;k<n;k++)
        {
        printf("%d\t",b[k]);
        }
}
int sort(int b[MAX],int n)
{
        int i,j,temp;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                if(b[i]<b[j])
                        {
                        temp=b[i];
                        b[i]=b[j];
                        b[j]=temp;
                        }
                }
        }
}

void c2dto1d(int a[MAX][MAX],int n,int r,int c)
{
        int i,j,k=0;
        int b[n];

        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
        b[k++]=a[i][j];
        }
        }
        print1d(b,k);
        printf("\nSort the 1 d Array=\n");
        sort(b,n);
        print1d(b,n);
        printf("\n1D to 2D array=\n");
        c1dto2d(b,n,r,c);

}
void c1dto2d(int b[MAX],int n,int r,int c)
{
        int a[MAX][MAX],i,j,k=0;

        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
        a[i][j]=b[k++];
        }
        }

        print2d(a,r,c);
        printf("\nOTPT=\n");
        snakepattern(a,r,c);
}

void snakepattern(int a[MAX][MAX],int r,int c)
{
        int i,j;
        for(i=0;i<r;i++)
        {
        if(i%2==0)
                {
                for(j=0;j<c;j++)
                        {
                        printf("%d\t",a[i][j]);
                        }
                }
        else
                {
                for(j=c-1;j>=0;j--)
                        {
                        printf("%d\t",a[i][j]);
                        }

                }
  printf("\n");
        }
}

