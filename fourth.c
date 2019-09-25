#include<stdio.h>
int main()
{
  int arr[10],arr1[10],m,n,arr2[20],i=0,j=0,k=0;
  printf("\n Enter the value of m and n\n");
  scanf("%d%d",&m,&n);
  printf("\n Enter the elements of array 1 \n");
  for(i=0;i<m;i++)
  {
    scanf("%d",&arr[i]);
  }
printf("\n Enter the elements of array 2 \n");
for(i=0;i<n;i++)
{
  scanf("%d",&arr1[i]);
}
i=0;
j=0;
k=0;
while(i<=m && j<=n)
{
  if(arr[i]<arr1[j])
{
  arr2[k]=arr[i];
  i++;
}
else
{
  arr2[k]=arr1[j];
  j++;
}
k++;
}
if(i>m)
{
  while(j<=n)
  {
    arr2[k]=arr1[j];
    j++;
    k++;
  }
}
  else
  {
  while(i<=m)
  {
    arr2[k]=arr[i];
    i++;
    k++;
  }
}
for(i=0;i<m+n;i++)
{
  printf("%d ",arr2[i]);
}
}
