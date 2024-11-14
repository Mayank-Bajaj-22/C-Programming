#include <stdio.h>
#include <string.h>
int main(){
  typedef struct Student{
    int roll_number;
    char name[50];
    char department[20];
    char course[30];
    int yearOFJoining;
  } Student;

  Student s1;
  Student s2;

  s1.roll_number = 100;
  strcpy(s1.name,"Mayank");
  strcpy(s1.department,"CSE");
  strcpy(s1.course,"Engineering");
  s1.yearOFJoining = 2024;

  s2.roll_number = 100;
  strcpy(s2.name,"Agrim");
  strcpy(s2.department,"IT");
  strcpy(s2.course,"Engineering");
  s2.yearOFJoining = 2024;

  printf("%s\n",s1.department);
  printf("%s\n",s2.department);
  if(s1.department==s2.department) printf("Both s1 and s2 are from same department");
  else printf("Both s1 and s2 are not from same department");

  return 0;
}