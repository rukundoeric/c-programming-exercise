#include<stdio.h>

int main() {
  int nums[100];
  int i;
  int input;

  printf("Enter list of numbers. Please enter \"0\" if you want to stop.\n");
  
  i = 0;
  
  do {
    printf("\nNumber %d: \t", i + 1);
    scanf("%d", &nums[i]);
    input = nums[i];
    i += 1;
  } while (input != 0);



  int n_size = i + 1; 
  for (int i = 1; i < n_size; i++){

    //  First, lets keep the current value and the current position.
     int current_value = nums[i];
     int current_position = i;

    // So, as long as the current position is greter than 0, then it means, I haven't checked all left elements. and also the left element should be less.
     while(current_position > 0 && current_value < nums[current_position - 1]) {
       // In such case, we keep replacing the rigth element by the left one.
       nums[current_position] = nums[current_position - 1];
       // Since, we are going left, we should reduce the current position by 1.
       current_position -= 1;
     }
     // Then after that, we can now put out current value to the current position.
     nums[current_position] = current_value;
  }
  


  printf("\nThe sorted list is as follow: \n");
  for (int i = 0; i < n_size; i++){
    printf("%d \t", nums[i]);
  }

  printf("\n");
  return 0;
}