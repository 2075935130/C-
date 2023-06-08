#include<stdio.h>
int main()
{
	int a[5]={3,5,8,4,6};
	int *p=&a[0];
	; 
	int max,i;
	
	   for(i=0;i<5;i++)
	   {
		
		max+=*(p+i);
     	}
	    printf("数组的和：%d\n",max);
	
	
	
	
	
	return 0;
 } 
