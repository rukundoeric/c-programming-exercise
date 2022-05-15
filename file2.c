#include <stdio.h>

int main(){
  int choice;
  home:
    printf("1: Display students\n");
    printf("2: Add new student\n");
    printf("3: Exit\n\n");
    printf("Please Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
      case 1: {
        system("clear");
        int choice2;
        printf("1: Display all\n");
        printf("2: Display one\n");
        printf("3: Go back home\n");
        scanf("%d", &choice2);
        switch(choice2) {
          case 1: {
            printf("All students \n");
            break;
          }
          case 2: {
            int id;
            printf("Please Enter student's ID: ");
            scanf("%d", &id);
            printf("One student \n");
          }
          case 3: {
            goto home;
            break;
          }
          default:
            printf("Wrong choice!");
        }
        break;
      }
      case 2: {
        system("clear");
        printf("Add new student\n");
      }
      default: {
        printf("Wrong choice\n");
      }
    }
  return 0;
}
