#include<stdio.h>

int main(void)
{
  int n, i, f;

  printf("Enter any number:");
  scanf("%d", &n);

  for(f = 1, i = n; i > 0; i--)
    f = f * i;

  printf("\nFactorial of %d is %d\n", n, f);

  return 0;
}
