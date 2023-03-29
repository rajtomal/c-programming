
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);

    if(marks<0 || marks>100){
        printf("Wrong Entry");
    }else if(marks<39){
        printf("Grade F");
    }else if(marks>=40 && marks<50){
        printf("Grade C");
    }else if(marks>=50 && marks<60){
        printf("Grade B");
    }else if(marks>=60 && marks<70){
        printf("Grade A-");
    }else if(marks>=70 && marks<80){
        printf("Grade A");
    }else{
        printf("Grade A+");
    }
}


//https://tutorial.techaltum.com/c-program-to-find-grade-of-a-student.html
