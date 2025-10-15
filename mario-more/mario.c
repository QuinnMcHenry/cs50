#include <stdio.h>

int main(void) {
    int n;

    int buildPyramid(int n);

    printf("Enter desired pyramid height: ");
    scanf("%i", &n);


    buildPyramid(n);
}

int buildPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int s=0; s<n-i; s++) {
            printf(" ");
        }
        for (int j=0; j<i; j++) {
            printf("*");
        }
        printf(" ");
        for (int j = 0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}