/*
 * Exercise 1: Taylor Series Approximation for Sine Function
 * Assignment 7 - IPFCE 2025
 * 
 * Implement the taylor_sine function that calculates the sine of x
 * using Taylor series approximation with n terms.
 * 
 * Taylor series for sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
 */

#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>

double taylor_sine(double x, int n) {
    // TODO: Implement the Taylor series approximation for sine
    // Hint: The series is: x - x^3/3! + x^5/5! - x^7/7! + ...
    // Use a loop to calculate n terms of the series
    double result = 0.0;

    // Beregner eksponenten: 1, 3, 5, 7, ...
    for(int i = 0;i < n; i++){
        int exponent = 2* i + 1;
    
    // Bergener x^eksponent
    double power = 1.0;
    for(int j = 0; j < exponent; j++){
        power = power * x;

    }
    // Beregner fakultet af eksponent (5!=120)
    double factorial = 1.0;
    for(int j = 1; j <= exponent; j++){
        factorial = factorial * j;
    }

    // Beregner leddet (x^eksponent)/eksponent!
    double led = power / factorial;

    // Skifter mellem plus og minus for hvert andet led
    if(i % 2 == 0){
        // Første, trejde, ... led er positiv
    
        result = result + led;
    } else {
        // Anden, fjerde, ... led er negativ
        result = result - led;
    }

    }
 
    return result; // placeholder - replace with your implementation
}
