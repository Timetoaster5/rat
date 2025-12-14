#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
	FILE *fileptr;
	char *path = argv[1];

	fileptr = fopen(path, "r");
	if (fileptr == NULL) {
		perror("Failed to open file");
		return 1; 
	}	
	
	int c; 
	while((c = fgetc(fileptr)) != EOF) {
		printf("%c", c); 
	}
	
	fclose(fileptr);	
	return 0;
}
