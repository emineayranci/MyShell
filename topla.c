#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

	int sayi1= atoi(argv[0]);
	int sayi2= atoi(argv[1]);

	int toplam = sayi1+sayi2;
	printf("%d + %d = %d \n",sayi1,sayi2,toplam);
	
	return 0;


}
