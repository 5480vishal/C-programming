#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,random,i=10;
        random=(rand()%100+1);

    while(i>0){
    printf("Enter the guess :\n");
    scanf("%d",&num);
    if(num==random){
        printf("Congratulations Your guess is right Your guess is %d and computer random number is also %d\n",num,random);
        break;
    }
    else if(num>random){
        printf("Better luck next time, your number is higher than computer generated number think little smaller\n");
        i--;
        printf("You have %d chances left\n",i);
    }
    else{
        printf("Better luck next time, your number is lower than computer generated number think little smaller\n");
        i--;
        printf("You have %d chances left\n",i);
    }
}

    return 0;
}