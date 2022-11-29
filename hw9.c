#include <stdio.h>
#include <string.h>

void Conv(char* str2) {
    int len = strlen(str2);
    for (int i = 0; i < len; i++) {
        if (str2[i] >= 'A' && str2[i] <= 'Z') str2[i] += 32;
        else if (str2[i] >= 'a' && str2[i] <= 'z') str2[i] -= 32;
    }
}

int main() {
    char str1[30];
    printf("문자열을 입력하세요: ");
    fgets(str1, sizeof(str1), stdin);
    Conv(str1);
    fputs(str1, stdout);
    return 0;
}