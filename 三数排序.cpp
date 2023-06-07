#include<stdio.h>
int main()
{
int x,y,z;
int temp;//临时存放
 printf("请输入三个数进行排序\n"); 
  scanf("%d%d%d",&x,&y,&z);
   if(x>y)
   {
    temp=x;
    x=y;
    y=temp;
   } 
    if(x>z)
    {
    	temp=x;
    	x=z;
    	z=temp;
    }
    if(y>z)
    {
    temp=y;
    y=z;
    z=temp;
    	
	}
	printf("第一：%d\n第二：%d\n第三：%d\n",z,y,x);
	
	
	
	return 0;
 } 
