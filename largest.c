#include<stdio.h>
void main()
{
int k,l,n;
printf("enter the number ");
scanf("%d%d%d",&k&l&n);
while(k!==0 && l!==0 && n!==0)
{
if(k>=l && k>=n)
{
printf("largest number  is K ");
}
elseif(l>=k && l>=n)
{

printf("the largest number is L");
}
elseif(n>=k && n>=l)
{
printf("the largest number is N");
}
}
printf("the numbers is 0");
}
