#include <stdio.h>

int main(int argc, char *argv[]){

	char *metin = argv[0];
	int counter= atoi(argv[1]);

	while(counter>0){
		printf("%s \n", metin);
		counter--;
	}

	return 0;

}
