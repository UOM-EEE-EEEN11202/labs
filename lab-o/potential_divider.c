// Add math defines to get pi
#define _USE_MATH_DEFINES
#include "potential_divider.h"
#include <complex.h>
#include <math.h>
#include <stdio.h>

// Our function definition
void potential_divider(double f[], size_t m) {

  // Values for calculations
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
  double magnitude[m];
  double phase[m];

  // For loop
  for (int i = 0; i < m; i++) {

    // Perform calculations
    w = 2 * M_PI * f[i];
    z2 = 1 / (I * w * c);
    v_in = a * cexp(I * phi); // V
    v_out = (z2 * v_in) / (z1 + z2);
    magnitude[i] = cabs(v_out);
    phase[i] = carg(v_out);

    // Print outputs.
    printf("Frequency: %.0f\tMagnitude: %.2f\tPhase: %.2f\n", f[i],
           magnitude[i], phase[i]);
  }

  // Print out of the values from the last iteration
  printf("\nFinal values:\nFrequency: %f\tMagnitude: %f\tPhase: %f", f[m - 1],
         magnitude[m - 1], phase[m - 1]);

  return;
}