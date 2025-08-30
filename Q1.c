 #include <stdio.h>

 int main() {
    int  marks;
    printf("enter the marks: \n");
    scanf("%d", &marks);

    if ( marks > 30){
        printf("pass");
    } else {
        printf("fail");
    }
 }