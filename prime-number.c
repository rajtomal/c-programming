#include<stdio.h>

int main(){

    int loop, input, value = 0;
    printf("Enter Number:");
    scanf("%d",&input);

    //logic for loop
    for(loop = 1; loop <= input; loop++){
        if(input % loop == 0){
            value++;
        }
    }

    if(value == 2){
        printf("%d is Prime Number.",input);
    }
    else{
        printf("%d is not Prime Number.",input);
    }
    return 0;
}
