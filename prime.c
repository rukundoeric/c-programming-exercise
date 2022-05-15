#include <stdio.h>
#include <math.h>


int main()
{
  int num;
  int n;


  printf("Enter the number: \n");
  scanf("%d", &num);
  printf("The prime number between 1 and %d, are: \n", num);

  for (n = 1; n <= num; n++){

    int count = 0;
    // Co-factors
    for(int i=2; i <= sqrt(n); i++) {
      if(n%i==0) {
        count++;
        break;
      }
    }
    
    if(count==0 && n!=1){
      printf("%d \n", n);
    } 
  }
  
  
  return 0;
}


// Prime decomposition

// int main(){
//   int res[10];
//   int num;
//   int j = 0;
//   printf("Enter the number: \n");
//   scanf("%d", &num);

//   for (int i = 2; i <= sqrt(num); i++){
//     if(num % i ==0){
//       while(num % i ==0){
//         num = num / i;
//         res[j] = i;
//         j += 1;
//       }
//     }
//   }

//   for (int i = 0; i < 10; i++){
//     printf("%d\t", res[i]);
//   }
  
  
//   return 0;
// }

// int main()
// {
//   int num;
//   int count = 0;

//   printf("Enter the number: \n");
//   scanf("%d", &num);

//   for(int i=2; i < sqrt(num); i++) {
//    if(num%i==0) {
//      count+=1;
//      break;
//    }
//   }

//   if(count==0 && num!=1){
//     printf("The number: %d is a prime number \n", num);
//   } else {
//     printf("The number: %d is a not prime number \n", num);
//   }
  
//   return 0;
// }