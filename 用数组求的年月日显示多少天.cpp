#include<stdio.h>
int main()
{
 int n[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 int x,y,z;
 int i,sum;
 printf("请输入年月日：");
 scanf("%d-%d-%d",&z,&y,&z);
 for(i=0;i<y-1;i++)
 {
 	sum=sum+n[i];
 	
 }
 sum=sum+z;
 if((y>2)&&((x%4==0&&x%100!=0)||(x%400==0)))
 {
 	sum=sum+1;
 }
 printf("sum=%d\n",sum);
 
 
 
 
 
 
 
 
 
return 0;
}
