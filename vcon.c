#include<stdio.h>
void main()
{
char a;
printf("enter the charecter");
scanf("%c",&a);
switch(a)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
     printf("the charecter is vowel");
break;
     default: printf("the charecter is consonent");
          break;
}
     
}
