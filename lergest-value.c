#include <stdio.h>

int main() {

  double n1, n2, n3;

  printf("Enter First number: ");
  scanf("%d", &n1);

  printf("Enter Second number: ");
  scanf("%d", &n2);

  printf("Enter Third numbers: ");
  scanf("%d", &n3);

  if (n1 >= n2 && n1 >= n3)
    printf("%d is the largest number.", n1);
  if (n2 >= n1 && n2 >= n3)
    printf("%d is the largest number.", n2);
  if (n3 >= n1 && n3 >= n2)
    printf("%d is the largest number.", n3);

  return 0;
}


//https://www.programiz.com/c-programming/examples/largest-number-three
