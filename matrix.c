#include <stdio.h>

int * i_sort(int arr[], int n) { 
  for (int i = 1; i < n; i++){
     int current_elem = arr[i];
     int current_pos = i;

     while(current_pos > 0 && current_elem < arr[current_pos - 1]) {
       arr[current_pos] = arr[current_pos - 1];
       current_pos -= 1;
     }
     arr[current_pos] = current_elem;
  }
  return arr;
}

int main(){
  int arr[] = {2, 3, 5, 2, 6, 3};
  int *res = i_sort(arr, 6);

  printf("The List of numbers:\n");
  for (int i = 0; i < 6; i++)
  {
    printf("%d\t", res[i]);
  }
   printf("\n");

  printf("The biggest number is: \t%d\n", res[5]);
  printf("The smallest number is: \t%d\n", res[0]);

  
  
  
  return 0;
}


// int main()
// {
  
//   int arr[4][3];
//   printf("Enter matrix numbers: \n");

//   for (int i = 0; i < 4; i++){
//     for (int j = 0; j < 3; j++)
//     {
//       printf("Number at position: (%d,%d)  ", i, j);
//       scanf("%d", &arr[i][j]);
//     }
//   }
  
//   printf("\nThe Matrix is as follow: \n");
//   for (int i = 0; i < 4; i++){
//     for (int j = 0; j < 3; j++)
//     {
//       printf("%d \t", arr[i][j]);
//     }
//     printf("\n\n");
//   }

//   return 0;
// }


// int main(int argc, char const *argv[])
// {
//   int arr[3][3];
//   int c = 1;
//   printf("Enter matrix numbers: \n");

//   for (int i = 0; i < 3; i++){
//     for (int j = 0; j < 3; j++)
//     {
//       printf("Number at position (%d, %d): ", i, j);
//       scanf("%d", &arr[i][j]);
//     }
//   }

//   printf("\nThe Matrix is as follow: \n");
//   for (int i = 0; i < 3; i++){
//     for (int j = 0; j < 3; j++)
//     {
//       printf("%d \t", arr[i][j]);
//       if((i == j && arr[i][j] != 1) || (i !=j && arr[i][j] != 0)){
//         c = 0;
//       }
//     }
//     printf("\n\n");
//   }
//   printf("\nConclussion: \n ");
//   if(c == 1){
//     printf("The above matrix is identical \n");
//   } else {
//     printf("The above matrix is not identical \n");
//   }

//   return 0;
// }
