#include <stdio.h>

int main()
{
  int arr[5];

  for (int i = 1; i <= 5; i++)
  {
    printf("Enter number: %d \t", i);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++){
      if(arr[i] < arr[j]){
        
      }
    }
  }
  

  
  
  return 0;
}
