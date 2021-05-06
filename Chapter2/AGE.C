#include <stdio.h>

void main(void)
   {
   float years, days;

   printf("\nPlease type your age in years: ");
   scanf("%f", &years);
   days = years * 365;
   printf("You are %.1f days old.", days);
   }