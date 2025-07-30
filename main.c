#include <stdio.h>

int main(int argc, char *argv[]){
	
	if (argc == 1){
		printf("Usage: mycat <filename>\n");
	}else if (argc == 2){
		FILE *fp = fopen(argv[1], "r");

		if (fp == NULL){
			printf("file not found\n");
			return 1;
		}

		char ch;
		
		if ((ch = fgetc(fp)) == EOF){
			printf("File is empty\n");
			return 1;
			}
		fseek(fp, -1, SEEK_CUR);
	
		while ((ch = fgetc(fp)) != EOF){
			putchar(ch);
		}

		fclose(fp);
		return 0;
	}else{
		printf("Usage: mycat <filename>\n");
		return 0;
	}

	return 0;
}
