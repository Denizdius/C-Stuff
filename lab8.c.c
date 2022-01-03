#include <stdio.h>
#define max_size 1
int main()
{

  char alphabet[max_size];
  int n, c, k;

  printf("Enter an a charachter then I will cover to ascii code \n");
  scanf("%s", &alphabet[0]);

  n = alphabet[0];

  printf("%d in binary number system is:\n", n);

  for (c = 7; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");



printf("%d in 0-1 versed binary number system is:\n", n);

  for (c = 7; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("0");
    else
      printf("1");
  }

  printf("\n");

  return 0;
}
