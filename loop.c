#include <stdio.h>

int main(){
  int arr[10];
  printf("Enter 10 numbers: \n");

  for (int i = 0; i < 10; i++){
    printf("Number %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  
  printf("The numbers are: \n");
  for (int i = 0; i < 10; i++){
   if(arr[i] > 0){
     printf("%d \n", arr[i]);
   }
  }
  

  return 0;
}


// int main(){
 
//   //for loop
//   // for(int i=1; i<=10; i++){
//   //   printf("%d \n", i);
//   // }

//   //While loop
//   int i = 1;
//   // while(i <= 10){
//   //   printf("%d \n", i);
//   //   i+=1;
//   // }

//   do
//   {
//     printf("%d \n", i);
//     i+=1;
//   } while (i <= 10);
  




//   return 0;
// }





// int main()
// {
//   int x, y;
//   int res;
//   printf("X \n");
//   scanf("%d", &x);
//   printf("Y \n");
//   scanf("%d", &y);

//   res = 1;

//   for(int i=1;i<=y; i++){
//     res = res * x;
//   }
//   printf("The result is : %d", res);
//   return 0;
// }


// Write a c program that display the following output:
// *
// **
// ***
// ****
// *****
// int main(){
//   for(int i=1; i<=5; i++){
//     // for(int j=1; j<=i; j++){
//     //   printf("*");
//     // }
//     // printf("\n");
//   }
//   return 0;
// }

// Write a c program that display the following output:
// *****
// ****
// ***
// **
// *
 
// int main()
// {
  
//   for (int i = 7; i >= 1; i--)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
  
//   return 0;
// }


// Write a c program that display the following output:
// 1******
// 12*****
// 123****
// 1234***
// 12345**
// 123456*
// 1234567
// int main(){
//   for(int i=1; i<=7; i++){
//     for(int j=1; j<=7; j++){
//       if(j <= i){
//         printf("%d", j);
//       } else {
//         printf("*");
//       }
//     }
//     printf("\n");
//   }
//   return 0;
// }



// Write a c program that display the following output:
// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *
// int main(){
//   for(int i=1; i<=5; i++){
//     for(int j=0; j<i; j++){
//       printf("*");
//     }
//     printf("\n");
//   }
//   for (int i=5; i >= 1; i--){
//     for (int j=1; j <= i; j++){
//       printf("*");
//     }
//     printf("\n");
//   }
  
//   return 0;
// }