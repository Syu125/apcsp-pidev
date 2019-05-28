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
    char input[256], f[10], l[10];
    int a;
    int id;
    printf("Please enter your first name\n");
    scanf("%s", f);
    printf("Hi %s\n",f);
    
   printf("Please enter your last name\n");
    scanf("%s", l);
    
    printf("Please enter your age\n");
    scanf("%d", &a);
    
    printf("Please enter your student ID\n");
    scanf("%d", &id);
	
    struct Student s;
    s.fname = f;
    
}
