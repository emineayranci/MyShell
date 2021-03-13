#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	
	int i= fork();
	if(i==0){
		char *parameterValues[3];
		parameterValues[0]= argv[1];
		parameterValues[1]= argv[2];
		parameterValues[2]= NULL;
		
		if(strcmp(argv[0],"topla")==0){
			execve("topla", parameterValues);
			wait(5);
		}
		else if(strcmp(argv[0],"cikar")==0){
			execve("cikar", parameterValues);
			wait(5);
		}
	
	}
	return 0;


}
