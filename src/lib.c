// Method 1
void fizzbuzz(int upto)
{
  for (int i = 1; i <= upto; i++)
  {
    if (i % 15 == 0)
    {
      puts("fizzbuzz");
    } 
    else if (i % 3 == 0)
    {
      puts("fizz");
    }
    else if (i % 5 == 0)
    {
      puts("buzz");
    }
    else printf("%d\n", i);
  }
}

// Method 2

void fizzbuzz_buffer(char *buffer, size_t buflen, int upto)
{
  // some light error handling
  if (upto > 184) {
    puts("error: cannot exceed 184.");
    return;
  } else if (upto <= 0) {
    printf("error: %d cannot be used. Must use a non-negative integer.\n", upto);
    return;
  }
  // this will be used to capture the number of characters we need to print on every iteration
  int check;

  for (int i = 1; i <= upto; i++)
  {
    if (i % 15 == 0) {
      check = snprintf(buffer, buflen, "fizzbuzz, ");
    }
    else if (i % 3 == 0) {
      check = snprintf(buffer, buflen, "fizz, ");
    }
    else if (i % 5 == 0) {
      check = snprintf(buffer, buflen, "buzz, ");
    }
    else {
      check = snprintf(buffer, buflen, "%d, ", i);
    }
    buffer += check;                // Since buffer starts empty,
                                    // we increment the buffer length 
                                    // by the amount of characters we printed to the string.
    buflen -= check;                // Then we decrement our buflen
                                    // to keep track of how much buffer we have left.
  }
  buffer -= 2;                      // After our loop, we need to remove the last two characters from our string
  buflen -= 2;                      // and track the length as well.
  snprintf(buffer, buflen, ".");    // Then append a period because it's nice.
}



