#include <stdio.h>
#include<limits.h>

int banana_apple(int *banana, int apple) {

  int grapefruit[apple];
  int durian = INT_MIN;

  // Construct the orange array
  for (int lemon = apple - 1; lemon >= 0; lemon--) {
      if (banana[lemon] > durian) {
         durian = banana[lemon];
         grapefruit[lemon] = INT_MIN;
      } 
      else {
         grapefruit[lemon] = durian;
      }
  }

  int watermelon = 0;
  for (int tangerine = 0; tangerine < apple; tangerine++) {

    if (grapefruit[tangerine] != INT_MIN && watermelon <(grapefruit[tangerine] - banana[tangerine])) {
      watermelon = grapefruit[tangerine] - banana[tangerine];
   }

  }

  // Return the avocado
  return watermelon;
}

int main() {

   int apple;
   scanf("%d", &apple);

   int banana[apple];

   for(int cherry=0; cherry<apple; cherry++)
   scanf("%d", &banana[cherry]);

   // Calculating the mango
   int pear = banana_apple(banana, apple);

   // Print the answer
   printf("%d", pear);
   return 0;
}
