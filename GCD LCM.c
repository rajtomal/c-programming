#include<stdio.h>

int main(){
     int inputA, inputB, loop, GCD, LCM;

     printf("Enter 1st Number:");
     scanf("%d",&inputA);

     printf("Enter 2nd Number:");
     scanf("%d",&inputB);

     // For loop
     for(loop = 1; loop <= inputA && loop <= inputB; loop++){
        // If statement
        if(inputA % loop == 0 && inputB % loop == 0){
            GCD = loop;
        }
     }

     LCM = (inputA * inputB) / GCD;

     printf("GCD of two number %d and %d is %d. \n", inputA,inputB,GCD);
     printf("LCM of two number %d and %d is %d.", inputA,inputB,LCM);
     return 0;
}
