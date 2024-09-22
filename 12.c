#include <stdio.h>
int main()
{
 int x;
  printf("Enter 1 for Salam, 2 for hello and 3 for Hi\n");
  scanf("%d", &x);
  switch (x)
    {
      case 1:
      printf("Salam");
      break;
      case 2:
      printf("Hello");
      break;
      case 3:
      printf("Hi");
      break;
      default:
      printf("Invalid option");
    }
  return 0;
}