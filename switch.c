#include <stdio.h>



int main()
{
  int num;
  int count = 0;

  printf("Enter the number: \n");
  scanf("%d", &num);

  for(int i=2; i < num/2; i++) {
   if(num%i==0) {
     count+=1;
     break;
   }
  }

  if(count==0 && num!=1){
    printf("The number: %d is prime \n", num);
  } else {
    printf("The number: %d is not prime \n", num);
  }
  
  return 0;
}



// Prime number

// int main(){
//   int num;

//   printf("Enter the number: \n");
//   scanf("%d", &num);

//   int i = 2; 
//   while (i < num)
//   {
//     if(num % i == 0){
//      printf("%d is not a prime number. \n", num);
//      break;
//     }
//     i+=1;
//   }
 
//   if(num == i){
//     printf("%d is a prime number. \n", num);
//   }

//   return 0;
// }



// int main()
// {

//   // FOR LOOP
//   for (int i = 1; i < 10; i+=2)
//   {
//     printf("%d \t", i);
//   }

//   printf("%d \t");

//   // WHILE LOOP
//   int j = 1;
//   while (j < 10)
//   {
//     printf("%d \t", j);
//     j+=1;
//   }

//   // DO  WHILE
//   // int i = 0;
//   // do
//   // {
//   //   printf("Number : %d \n", i);
//   //   i+=1;
//   // } while (i < 5);
  
  
  
//   return 0;
// }

