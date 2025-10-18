#include "include/taylor_sine.h"
#include <math.h>
#include <stdio.h>
#include <assert.h>

int main(){

    // Test med små værdier
    printf("Small values:\n");
    double x_small = 0.8;
    double result_taylor_small = taylor_sine(x_small, 5);
    double result_math_small = sin(x_small);
    printf("Taylor Sine Result: %f\n", result_taylor_small);
    printf("Math Sine Result: %f\n", result_math_small);
    printf("\n");

    // Test med store værdier
    printf("Large values:\n");
    double x_large = 5.0;
    double result_taylor_large = taylor_sine(x_large, 15);
    double result_math_large = sin(x_large);
    printf("Taylor Sine Result: %f\n", result_taylor_large);
    printf("Math Sine Result: %f\n", result_math_large);
    printf("\n");
}

/*
Svar til spørgsmål c)
- For små værdier af x (0.1, 1.0, 2.0, 3.0) giver vores Taylor series nogenlunde samme 
  resultater som math.h sin. Testede de hel små værdier som (0.1-1.0), for vi præcis de samme værdier som math.c sine.

- For de større værdier af x (9.0, 10.0) giver vores Taylor serie også nogenlunde samme resultater som math.c,
  men hvis vi går over 11.0, for vi forskellige svar fra taylor serien. Testede et interval mellem (5.0-8.0), 
  for vi præcis de samme værdier som math.c sine.

2. Øgelse af nummer af Taylor serie led/termer?

- For de større tal er det bedre med flere led/termer end få. Testede det ved at bytte termerne om for de små og større værdier,
  15 og 5. For de små værdier gjorde det ikke en forskel, men for de større x-værdier gjorde det en forskel.


*/