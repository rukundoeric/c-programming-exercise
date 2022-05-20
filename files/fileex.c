#include<stdio.h>
struct Student
{
  int id;
  char name[30];
  int age;
}st;

void createStudent() {
  FILE *p;
  printf("Enter Student Id \n");
  scanf("%d", &st.id);
  printf("Enter Student Name \n");
  scanf("%s", st.name);
  printf("Enter Student Age \n");
  scanf("%d", &st.age);
  p=fopen("Students.txt", "a+");
  
  fprintf(p, "%d \t %s \t %d \n", st.id, st.name, st.age);
  fclose(p);
}

void displayStudents() {
  FILE *p;
  p=fopen("Students.txt", "r");
  printf("\nID\tNAME\tAGE\n");
  printf("===========================\n");
  while(!feof(p)) {
    fscanf(p, "%d \t %s \t %d \n", &st.id, st.name);
    printf("%d \t %s \t %d \n", st.id, st.name, st.age);
  }
  fclose(p);
}


int main() {
  int choice;
  printf("1: create new student \n");
  printf("2: display students \n");
  printf("Please Enter your choice: \n");
  scanf("%d", &choice);
   
  switch (choice)
  {
  case 1:
    createStudent();
    break;
  case 2:
    displayStudents();
    break;
  
  default:
    break;
  }
  return 0;
}