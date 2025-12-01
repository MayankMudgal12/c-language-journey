#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int words = 0;
    int in_word = 0;

    fp = fopen("myfile.txt", "r");

    if(fp == NULL) {
        printf("Error! File does not exist.\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        if(isspace(ch)) {
            in_word = 0;
        } else if(in_word == 0) {
            in_word = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Total number of words = %d\n", words);

    return 0;
}
