#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("myfile.txt", "w");

    if(fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter text to write in file: ");
    fgets(text, 100, stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File created and text written successfully!\n");

    return 0;
}
