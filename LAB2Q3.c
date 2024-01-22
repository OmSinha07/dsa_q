#include<stdio.h>
int main()
{
int n,m,z=0,nz=0;
int ar[n][m];
printf("enter row size");
scanf("%d",&n);
printf("enter column size");
scanf("%d",&m);
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        scanf("%d",&ar[i][j]);
    }
}
printf("the orignal matrix\n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        printf("%d",ar[i][j]);
    }
    printf("\n");
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
      if(ar[i][j]==0)
      z++;
      else
      nz++;
    }
}
if(nz>z)
printf("not a sparse marix");
else
{
    printf("the sparse matrix is\n");
    int k=1;
    int arr[nz+1][3];
    arr[0][0]=n;
    arr[0][1]=m;
    arr[0][2]=nz;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         if(ar[i][j]!=0)
        {
    arr[k][0]=i;
    arr[k][1]=j;
    arr[k][2]=ar[i][j];
}
}
k++;
    }


for(int i=0;i<nz+1;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
} 
}  
