#include<stdio.h>
int main()
{
    for(int i=0;i<4;i++){
        for(int j=1;j<=8;j++){
            if(j<=i+1)
            {
            printf("%d ",j);
            }
            else if(j>7-i)
            {
            printf(" %d",9-j);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}