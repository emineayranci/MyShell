#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[], char **envp){
	
while(1){
	printf("myshell>>");
	char inputValue[60];
	gets(inputValue);
	printf("%c", inputValue);
	char *pt;
	pt= strtok(inputValue, " ");
	int index=0;
	char **parameters[8][5];
	while(pt!=NULL){	
		strcpy(parameters[index], pt);
		pt = strtok(NULL, " ");
		index++;		
	
	}

	if(strcmp(parameters[0], "exit")==0){
		exit(0);
	}else if(strcmp(parameters[0], "clear")==0){
		system("clear");
		wait(5);	
	}else if(strcmp(parameters[0], "cat")==0){
		printf("cat: %s\n", parameters[1]);
	}
      	int i = fork();
	if(i==0){	
		if(strcmp(parameters[0], "tekrar")==0 & strcmp(parameters[3],"|")==0 & strcmp(parameters[4], "islem")==0){
			char *parameterValues1[3];
			char *parameterValues2[4];
			parameterValues1[0]= parameters[1];
			parameterValues1[1]= parameters[2];
			parameterValues1[2]= NULL;
			parameterValues2[0]= parameters[5];
			parameterValues2[1]= parameters[6];
			parameterValues2[2]= parameters[7];
			execve("tekrar", parameterValues1);
			execve("islem", parameterValues2);
			wait(5);
		}else if(strcmp(parameters[0], "islem")==0 & strcmp(parameters[4],"|")==0 & strcmp(parameters[5], "tekrar")==0){
			char *parameterValues1[4];
			char *parameterValues2[3];
			parameterValues1[0]= parameters[1];
			parameterValues1[1]= parameters[2];
			parameterValues1[2]= parameters[3];
			parameterValues2[0]= parameters[6];
			parameterValues2[1]= parameters[7];
			parameterValues2[2]= NULL;
			
			execve("islem", parameterValues1);
			execve("tekrar", parameterValues2);
			wait(5);
		}

		else if(strcmp(parameters[0], "islem")==0){
			char *parameterValues[4];
			parameterValues[0]= parameters[1];
			parameterValues[1]= parameters[2];
			parameterValues[2]= parameters[3];
			parameterValues[3]= NULL;
			execve("islem", parameterValues);
			wait(5);
		}
		else if(strcmp(parameters[0], "tekrar")==0){
			char *parameterValues[3];
			parameterValues[0]= parameters[1];
			parameterValues[1]= parameters[2];
			parameterValues[2]= NULL;
			execve("tekrar", parameterValues);
			wait(5);
		}
	}


}

	return 0;


}
