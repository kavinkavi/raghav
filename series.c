 #include<stdio.h>
void main()
{
    int k,r;
    long int i=0l,j=1,f;

    printf("Enter the number range:");
    scanf("%d",&r);

    printf("series ");
    printf("%ld %ld",i,j);

    for(k=2;k<r;k++)
{
         f=i+j;
         i=j;
         j=f;
         printf(" %ld",j);
    }
    }
