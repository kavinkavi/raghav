#include <stdio.h>

int main()
{
    int year,n=4;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%n == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
            {
                printf("%d is a leap year.", year);
            }
            else
            {
                printf("%d is not a leap year.", year);
            }
        }
        else
        {
            printf("%d is a leap year.", year );
        }
    }
    else
    {
        printf("%d is not a leap year.", year)
    }
}
