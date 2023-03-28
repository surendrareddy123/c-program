#include <stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &num);
    while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
    }
    printf("Sum of digits = %d", sum);#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}
    return 0;
}
