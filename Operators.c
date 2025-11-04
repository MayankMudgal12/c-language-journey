#include <stdio.h>

int main() {
    int a = 5, b = 3, choice1, choice2;

    printf("1.Relational 2.Logical 3.Bitwise 4.Assignment 5.Inc/Dec: ");
    scanf("%d", &choice1);

    switch (choice1) {
        case 1:  // Relational
            printf("1.> 2.< 3.== : ");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1: printf("%d\n", a > b); break;
                case 2: printf("%d\n", a < b); break;
                case 3: printf("%d\n", a == b); break;
            } break;

        case 2:  // Logical
            printf("1.&& 2.|| 3.! : ");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1: printf("%d\n", (a && b)); break;
                case 2: printf("%d\n", (a || b)); break;
                case 3: printf("%d\n", !a); break;
            } break;

        case 3:  // Bitwise
            printf("1.& 2.| 3.^ : ");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1: printf("%d\n", a & b); break;
                case 2: printf("%d\n", a | b); break;
                case 3: printf("%d\n", a ^ b); break;
            } break;

        case 4:  // Assignment
            printf("1.= 2.+= 3.-=: ");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1: b = a; break;
                case 2: b += a; break;
                case 3: b -= a; break;
            }
            printf("b=%d\n", b);
            break;

        case 5:  // Increment / Decrement
            printf("1.++a 2.--a: ");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1: ++a; break;
                case 2: --a; break;
            }
            printf("a=%d\n", a);
            break;
    }
    return 0;
}
