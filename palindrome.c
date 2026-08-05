#include<stdio.h>

int main(){
    int num,a,b,c=0,temp;
    printf("Enter number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
    
    b=temp%10;
    temp=temp/10;
    c=c*10+b;
    }
   if(c==num){
    printf("%d is palindrome number",num);

   }
   else{
    printf("%d is not a palindrome number",num);
   }

    
}