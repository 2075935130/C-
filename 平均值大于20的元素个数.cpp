#include<stdio.h>
int main()
{
	int n[3][4]={{1,2,23,4},{5,6,56,8},{45,10,11,12}};
	int *p=&n[0][0];
	int sum=0,count=0;
	double average;
	int i;
	for(i=0;i<12;i++)
	{
		sum+=*(p+i);
		if(*(p+i)>20)
		count++;
	}
	average=(double)sum/12;
	printf("ƽ��ֵΪ��%.2f\n",average);
	printf("����20��Ԫ�ظ���Ϊ:%d\n",count);
	return 0;
}
