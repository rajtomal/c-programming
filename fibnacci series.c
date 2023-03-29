#include <stdio.h>
int main() {
    int i, first = 1, second, sum, num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    while (i <= num) {
        sum = first + second;
        printf("Number is: %d, \n", sum);
        first = second;
        second = sum;
        ++i;
    }

    return 0;
}
//https://www.javatpoint.com/fibonacci-series-in-c
