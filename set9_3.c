#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("myfile.txt", "r");

    if(fp == NULL) {
        printf("Error! File does not exist.\n");
        return 1;
    }

    while(fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
