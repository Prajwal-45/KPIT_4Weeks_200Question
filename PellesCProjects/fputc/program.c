#include <stdio.h>
int main(void){
FILE *fptr;
fptr=fopen("file.txt","w");
fputs("All Printable ASCII character:\n",fptr);
	for(int c=33;c<=125;c++){
        fprintf(fptr,"%d:",c);
		fputc(c,fptr);
		fputs("\n",fptr);
	}
fclose(fptr);
return 0;
}
