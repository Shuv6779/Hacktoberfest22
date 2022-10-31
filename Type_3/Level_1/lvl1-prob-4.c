#include <stdio.h>

int main() {

    int integer;
    scanf("%d", &integer);
    
    if (integer < 0) {
        return 0;
    }
    

    for (unsigned int m = 0; m < 46341; m++) {
        if (m * m <= integer && integer < (m+1) * (m+1)) {
            printf("%u\n", m);
            break;
        }
    }

    return 0;
}