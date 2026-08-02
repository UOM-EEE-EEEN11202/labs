// Alex Casson
//
// Aim
// Code to simulate a circuit, using a for loop
// ----------------------------------------------------------------------------

// Required define functions
#include "potential_divider.h"
#include <stdio.h>
#include <stdlib.h>

// Constants
#define M 100

// Main function
int main(void) {

  // Get user input to control the loop
  double start = 0, stop = 0;
  printf("Enter start frequency (in Hz): ");
  scanf("%lf", &start);
  printf("Enter stop frequency (in Hz): ");
  scanf("%lf", &stop);

  // Set the frequencies to evaluate
  double f[M];
  double increment = (stop - start) / (M - 1); // calculate the increment
  for (int i = 0; i < M; i++) {
    f[i] = start + (i * increment);
  }

  // Run circuit function
  size_t m = sizeof(f) / sizeof(f[0]);
  potential_divider(f, m);

  return EXIT_SUCCESS;
}
