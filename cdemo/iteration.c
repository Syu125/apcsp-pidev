#include <stdio.h>

int main(){
int div = 5;
printf("%d is a factor of the numbers below:\n",div);
for (int i = 0; i < 100; i++)
{
	if(i%div == 0){
	printf("%d\n",i);	
	}
}
}
