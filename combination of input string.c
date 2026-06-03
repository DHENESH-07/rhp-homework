#include <stdio.h>
#include <string.h>
int main() {
    char str[20];
    scanf("%s", str);

    int n = strlen(str);

    for (int i = 1; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1 << j))
                printf("%c", str[j]);
        }
        printf("\n");
    }

    
    return 0;
}