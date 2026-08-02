#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define N 256

int main(void) {

  // Get user input
  char buffer[N + 1], *filename = buffer;
  char ch;
  uint32_t i = 0; // counter for how many characters read
  printf("Enter a file name: ");
  while ((ch = getchar()) != '\n') { // get one character at a time
    filename[i++] = ch;
    // Enter your code under here
  }
  for (; i < N + 1; i++) { // fill the rest of the array with null characters
    filename[i] = '\0';
  }

  // Enter your code under here

  return EXIT_SUCCESS;
}
