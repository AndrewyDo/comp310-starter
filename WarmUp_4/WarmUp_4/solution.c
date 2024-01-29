#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    int n = strlen(str);
    
    for (int i = 0; i < n / 2; i++) {
        char t = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = t;
    }

    printf("%s\n", str);

    return 0;
}
