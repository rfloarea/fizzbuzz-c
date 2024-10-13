#include <stdio.h>
#include "lib.c"

int main()
{
  puts(" ");
  puts("Method 1: Print directly to terminal");
  puts("====================================");
  fizzbuzz(15);

  puts(" ");
  puts("Method 2: Print string using buffer passed to function");
  puts("======================================================");
  char buffer[1000] = {0};
  fizzbuzz_buffer(buffer, sizeof(buffer), 30);
  printf("%s\n", buffer);

  // Method 3: Print string to terminal by allocating memory
  
  return 0;
}
