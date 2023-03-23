#include <stdio.h>

int main() {
    int c[3][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}},
        {{9, 1}, {2, 3}}
    };
    
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", c[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("address=%d address=%d address=%d address=%d\n", c,*c,c[0],&c[0][0]);
    printf ("c[0][0][1] = %d", *(c[0][0]+1));
    return 0;
}