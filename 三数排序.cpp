#include<stdio.h>
int main()
{
int x,y,z;
int temp;//��ʱ���
 printf("��������������������\n"); 
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
	printf("��һ��%d\n�ڶ���%d\n������%d\n",z,y,x);
	
	
	
	return 0;
 } 
