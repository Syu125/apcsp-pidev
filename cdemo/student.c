#include <stdio.h>
#include <string.h>
struct Student{
    char fname[50];
    char lname[50];
    int age;
    int studentID;
};
void printStudent(struct Student* s){
    printf("Full Name: %s, %s",s->fname,s->lname);
}
int main(){
    char input[256], f[256];
    printf("Please enter your first name\n");
    fgets(input, 256, stdin);
    scanf(input,"%s", f);
    printf("Hi %s",f);
    
   printf("Please enter your last name");
    fgets(input, 256, stdin);
    scanf(input,"%s", f);
    
    printf("Please enter your age");
    fgets(input, 256, stdin);
    scanf(input,"%s", f);
    
    printf("Please enter your student ID");
    fgets(input, 256, stdin);
    scanf(input,"%s", f);
}
