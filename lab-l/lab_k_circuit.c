#define _USE_MATH_DEFINES
#include <complex.h>
#include <math.h>

int main(void) {

  // Define variables
  double z1 = 0;
  double complex z2 = 0;
  double complex v_in = 0, v_out = 0;
  double magnitude = 0, phase = 0;
  double c = 0, w = 0, f = 0, a = 0, phi = 0;

  // Step 4

  // Set up problem
  z1 = 1e3;  // ohms
  c = 1e-9;  // F
  f = 160e3; // Hz
  a = 5;     // V
  phi = 0;   // radians

  // Calculate z2, v_in and v_out
  w = 2 * M_PI * f;
  z2 = 1 / (I * w * c);
  v_in = a * cexp(I * phi); // V
  v_out = (z2 * v_in) / (z1 + z2);

  // Find magnitude and phase of v_out
  magnitude = cabs(v_out);
  phase = carg(v_out);

  return 0;
}