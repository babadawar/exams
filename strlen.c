#include<stdio.h>
#include<string.h>

int main(){
    char name[100];
    int l;
    printf("Enter a string: ");
    scanf("%s", name);
    l = strlen(name);
    printf("Length of the string is: %d\n", l);
    return 0;
}
