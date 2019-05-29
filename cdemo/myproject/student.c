#include "student.h"
void printStudent(struct Student s[]){
    for(int i = 0; i <=count; i++){
    printf("\n"); 
    printf("Full Name: %s %s\n",s[i].fname,s[i].lname);
    printf("Age: %d\n",s[i].age);
    printf("Student ID: %d\n",s[i].studentID);
    printf("\n");
        }
}


   
