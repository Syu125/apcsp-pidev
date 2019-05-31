#include <stdio.h>
#include <stdlib.h>
const double pi = 3.14159265897;
double areaOfCircle(double r){
double result = r*r*pi;
return result;
}
int main(int argc, char* argv[]){
float l;
float h;
char *a = argv[1];
char *b = argv[2];

l = atof(a);
h = atof(b);
int arg = 1;
while(arg < argc){
for(int i = l; i <= h; i++){
int r = i;
double get = areaOfCircle(r);
printf("The area of a circle with radius %d is %f\n",r, get);
arg++;
}
}
}
