#include<stdio.h>
int main()
{
	int t1=0,t2=1,nextterm,i,n;
	printf("enter the number of terms:\n");
	 scanf("%d",&n);
	 printf("fibonacci series:\n%d\n%d\n",t1,t2);
	 for(i=2;i<n;i++)
	 {
	 	nextterm=t1+t2;
	 	printf("%d\n",nextterm);
	 	t1=t2;
	 	t2=nextterm;
	 }
	 
	 return 0;
}
