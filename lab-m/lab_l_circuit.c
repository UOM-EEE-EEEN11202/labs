// Alex Casson
//
// Aim
// Code to simulate a circuit, using a for loop
// ----------------------------------------------------------------------------

// Required define functions
#define _USE_MATH_DEFINES
#include <complex.h>
#include <math.h>
#include <stdio.h>

// Constants
#define M 100

// Main function
int main(void) {

  // Declare and initialize variables - these are not changing on each
  // iteration, so can be outside of the loop
  double z1 = 0;
  double complex z2 = 0;
  double complex v_in = 0, v_out = 0;
  double c = 0, w = 0, a = 0, phi = 0;

  // Set up problem
  z1 = 1e3; // ohms
  c = 1e-9; // F
  a = 5;    // V
  phi = 0;  // radians

  // Declarations of arrays
  double f[M] = {};
  double magnitude[M] = {};
  double phase[M] = {};

  // For loop
  for (int i = 0; i < M; i++) {

    // Set frequency to use
    f[i] = (i + 1000) * 100;

    // Bulk of the code is then unchanged, it's just now in the loop
    w = 2 * M_PI * f[i];
    z2 = 1 / (I * w * c);
    v_in = a * cexp(I * phi); // V
    v_out = (z2 * v_in) / (z1 + z2);
    magnitude[i] = cabs(v_out);
    phase[i] = carg(v_out);

    // Print outputs. Don't worry about the syntax of this line for now
    printf("Frequency: %.0f\tMagnitude: %.2f\tPhase: %.2f\n", f[i],
           magnitude[i], phase[i]);
  }

  // Print out of the values from the last iteration
  printf("\nFinal values:\nFrequency: %f\tMagnitude: %f\tPhase: %f", f[M - 1],
         magnitude[M - 1], phase[M - 1]);
  return 0;
}