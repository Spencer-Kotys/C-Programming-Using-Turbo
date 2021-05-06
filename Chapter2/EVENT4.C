#include <stdio.h>

void main(void)
   {
   int event;
   char heat;
   float time;

   printf("\nType event number, heat letter, and time: ");
   scanf("%d %c %f", &event, &heat, &time);
   printf("The winning time in heat %c", heat);
   printf(" of event %d was %.2f.", event, time);
   }