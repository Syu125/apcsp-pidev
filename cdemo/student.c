#include <stdio.h>
#include <string.h>
struct Student{
    char fname[20];
    char lname[20];
    int age;
    int studentID;
};
void enter(int c){
 printf("Please enter your first name\n");
    scanf("%s", f);
    printf("Hi %s\n",f);
    
   printf("Please enter your last name\n");
    scanf("%s", l);
    
    printf("Please enter your age\n");
    scanf("%d", &a);
    
    printf("Please enter your student ID\n");
    scanf("%d", &id);
        
 struct Student s&c;
    strcpy(s.fname,f);
    strcpy(s.lname,l);
    s.age = a;
    s.studentID = id;    	
}
void printStudent(struct Student s){
    printf("Full Name: %s %s\n",s.fname,s.lname);
    printf("Age: %d\n",s.age);
    printf("Student ID: %d\n",s.studentID);
    printf("\n");
}
int main(){
    char input[256], f[20], l[20];
    int a;
    int id;
    int answer;
    int count;
    printf("Do you want to enter student information? Press 0 if yes, 1 for no");
    scanf("%d",answer);

	if(answer ==0 ){
	count ++;
	enter(count);
}
	

    printf("\nStudents\n");
    printStudent(s);
}
