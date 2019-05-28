#include <stdio.h>
#include <string.h>

int main(){
char loopABC[25];
	char* constantABC = "abcdefghijklmnopqrstuvwxyz";
	for(int i = 0; i <26; i++){
		 loopABC[i] = i+97;
		printf("%c\n",loopABC[i]);
	}
	printf("Original: %s,   Loop: %s\n",constantABC, loopABC);
if(strcmp(constantABC,loopABC) == 64){
		printf("The two strings match\n");
	}else{
		printf("The strings do not match\n");
	}
}
