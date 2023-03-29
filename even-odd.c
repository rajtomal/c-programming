#include<stdio.h>

int main(){
    int inputValue;
    printf("Enter Number:");
    scanf("%d",&inputValue);

    // if else Statement
    if(inputValue % 2 == 0){
        printf("%d is Even Number.",inputValue);
    }
    else{
        printf("%d is Odd Number.", inputValue);
    }
    return 0;
}
