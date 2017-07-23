#include<stdio.h>
void main()
{
int k,i,sum=0;
printf("enter the value");
scanf("%d",&k);
for(i=1;i<=k;++i)
{
sum+=i;
}
printf("%d",sum);
}
