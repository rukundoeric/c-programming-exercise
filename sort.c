#include<stdio.h>

int main() {
  int i, j, count, temp;

  printf("\nHow many numbers you are going to enter : ");  
  scanf("%d", &count);

  
  // Get the list of numbers
  int numbers[count];
  printf("Enter %d elements", count);
  // This loop would store the input numbers in the array
  for (int  i = 0; i < count; i++){
    printf("\n\nNumber %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }


  // Implementation of insertion sort algorithm
  for (i = 1; i < count; i++){
    temp = numbers[i];
    j = i - 1;
     while(j >= 0 && temp < numbers[j]) {
       numbers[j + 1] = numbers[j];
       j -= 1;
     }
     numbers[j + 1] = temp;
  }
  

  // Printing out the sorted numbers
  printf("\nOrder of sorted elements: \n");
  for (i = 0; i < count; i++){
    printf("%d \t", numbers[i]);
  }

  printf("\n");
  return 0;
}