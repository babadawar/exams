#include<stdio.h>
int main()
{
int a,b;
float result;
char ch;
printf("enter 1st number");
scanf("%d",&a);
printf("enter 2nd number");
scanf("%d",&b);
printf("enter operator");
scanf("%c",&ch);
result=0;
switch(ch)
{
	case '+':
            result=a+b;
            break;
             
        case '-':
            result=a-b;
            break;
         
        case '*':
            result=a*b;
            break;
             
             
        case '%':
            result=a%b;
            break;
        default:
            printf("Invalid operation.\n");
    }
    printf("%f",result);
    return 0;
    
}