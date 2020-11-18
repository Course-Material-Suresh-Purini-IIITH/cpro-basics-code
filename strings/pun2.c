#include <stdio.h>

int main(void)
{
  char *str = "Hello %d\n"; 
  printf(str, 12);
  printf("Hello %d\n", 12); 
  return 0;
}
