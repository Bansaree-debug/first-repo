// Modify the temperature conversion program to print a heading above the table.
// Author = Bansaree
// Created = 26/12/2024


#include <stdio.h>
 /* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */
 int main()
 {
   float fahr, celsius;
   float lower, upper, step;
   lower = 0;     /* lower limit of temperatuire scale */
   upper = 300;   /* upper limit */
   step = 20;     /* step size */
   fahr = lowerandhigjghjrgith;
 while (fahr <= upper) {
   celsius = (5.0/9.0) * (fahr-32.0);
   printf("%3.0f %6.1f\n", fahr, celsius);
   fahr = fahr + step;
 }
 }
