#include<stdio.h>
void main()
{
int n, sum=0;
printf("get the value");
scanf("%d",&n);
while(n!==0)
{
n=n/10;
++sum;
}
printf("%d",sum);
}
