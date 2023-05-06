#include<stdio.h>
int binarySearch(int a[],int key,int n)
{
	int low=0;
	int high=n-1;
	int mid=low+high/2;
    if(a[mid]==key)
    {
    	return 1;
	}
	else if(key<a[mid])
	{
		high=mid-1;
		low=low;
		return 1;
	}
	else
	{
		low=mid+1;
		high=high;
		return 1;
	}
	return -1;
}
int main()
{
	int n,arr[20],k,i;
	printf("enter the array length:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the key to search:");
	scanf("%d",&k);
	int res=binarySearch(arr,k,n);
	if(res==1)
	{
		printf("element is present");
	}
	else
	{
		printf("element could not present");
	}
}
