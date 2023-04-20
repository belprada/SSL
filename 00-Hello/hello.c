#include <stdio.h>

int main(void) {
    FILE *output;
    output = fopen("output.txt","w");
    fprintf(output, "Hello, World!\n");
    fclose(output);
    return 0;
}