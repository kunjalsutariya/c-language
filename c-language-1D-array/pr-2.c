#include <stdio.h>
main() {
    int first, last, j, i;
    int a[100];
    int b = 0;
    
    printf("Enter the first year number: ");
    scanf("%d", &first);
    printf("Enter the last year number: ");
    scanf("%d", &last);

   
    for (j = first; j <= last; j++) {
        if (j % 4 == 0) {
            a[b] = j;
            b++;
        }
    }

    printf("The array is: ");
    for (i = 0; i < b; i++) {
        printf("%d \n", a[i]);
    
    }
    printf("\n");

}
