#include<stdio.h>
int main()
{
int x,y,z;
printf("������x��y��z����\n"); 
scanf("%d%d%d",&x,&y,&z);

	if(x>y&&x>z)
	printf("max=%d\n",x);
	
	
	else if(y>x&&y>z)
	printf("max��%d\n",y);
	
	else if(z>x&&z>y)
	printf("max��%d\n",z); 
	return 0;
}
