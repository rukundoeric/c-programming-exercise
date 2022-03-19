#include<stdio.h>

int main() {
  int nums[10];


  // Get the list of numbers
  printf("Enter list of 10 numbers.");
  for (int  i = 0; i < 10; i++){
    printf("\nNumber %d: ", i + 1);
    scanf("%d", &nums[i]);
  }


  // Start sorting
  for (int i = 1; i < 10; i++){

    //  First, lets keep the current element and the current position.
     int current_elem = nums[i];
     int current_pos = i;

    // So, as long as the current position is greter than 0, then it means, I haven't checked all left elements. and also the left element should be less.
     while(current_pos > 0 && current_elem < nums[current_pos - 1]) {
       // In such case, we keep replacing the rigth element by the left one.
       nums[current_pos] = nums[current_pos - 1];
       // Since, we are going left, we should reduce the current position by 1.
       current_pos -= 1;
     }
     // Then after that, we can now put out current value to the current position.
     nums[current_pos] = current_elem;
  }
  


  printf("\nThe sorted list is as follow: \n");
  for (int i = 0; i < 10; i++){
    printf("%d \t", nums[i]);
  }

  printf("\n");
  return 0;
}