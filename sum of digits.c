#include<stdio.h>
int main(){
    int num,sum;
    printf("enter 5 digit no. ");
    scanf("%d",&num);
    while(num!=0){
sum=sum + num%10;
num/=10;
    }
    printf("sum is %d",sum);
    return 0;
}