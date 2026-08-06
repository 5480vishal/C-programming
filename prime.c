#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, flag, j;
    printf("Enter the  range  til ou want to get prime number and composite number:\n");
    scanf("%d", &num);
    printf("%d is a range\n",num);
    for (i = 2; i <= num; i++)
    {
        flag = 1;

        
            for (j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    printf("%d is a composite number\n", i);
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                printf("%d is a prime number\n", i);
            }
        }

        return 0;
    }