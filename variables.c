#include <stdio.h>

int main(){
  int num1, num2;
  printf("Enter two numbers: \n");
  scanf("%d %d", &num1, &num2);

  if(num1 > num2){
    printf("%d is the highest \n", num1);
    // bigNum = num1;
  } else if(num1 < num2){
    printf("%d is the highest \n", num2);
    // bigNum = num2;
  } else {
    printf("The two values are equal \n");
  }

  // printf("The biggest number is %d \n", bigNum);

  return 0;
}

// int main()
// {
//   float c, f;
//   printf("Enter the value in Celsius : \n");
//   scanf("%f", &c);
//   f = c * (9 / 5) + 32;
//   printf("The value in fahrenheit degree is %f \n", f);
//   return 0;
// }

// int main()
// {
//   int choise;
//   float c, f;
//   printf("1: Convert to Fahrenheit  \n");
//   printf("2: Convert to Celsius  \n");
//   printf("Please Enter the choise: \n")
//   ;
//   scanf("%d", &choise);
//   switch (choise)
//   {
//   case 1:
//       printf("Enter the value in Celsius : \n");
//       scanf("%f", &c);
//       f = c * (9 / 5) + 32;
//       printf("The value in Fahrenheit degree is %f \n", f);
//     break;
//   case 2:
//       printf("Enter the value in Fahrenheit : \n");
//       scanf("%f", &f);
//       c = f - 32 * (5 / 9);
//       printf("The value in Celsius degree is %f \n", c);
//     break; 
  
//   default:
//      printf("Wrong choice! \n");
//     break;
//   }
//   return 0;
// }



// int main()
// {
//   int a, b, c;

//   printf("Enter the first number: \n");
//   scanf("%d", &a);
//   printf("Enter the second number: \n");
//   scanf("%d", &b);

//   c = a+b;

//   printf("The sum of %d and %d is %d \n", a, b, c);
//   return 0;
// }
