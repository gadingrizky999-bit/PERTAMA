#include <stdio.h>
int main() {

int n, A, B, C, D, E;
scanf("%d", &n);

if (n <= 39) {
    printf("E\nSangat Kurang");
} else if (n <= 54) {
printf("D\nKurang");
} else if (n <= 69) {
printf("C\nCukup");
} else if (n <= 84) {
printf("B\nMemuaskan");
}else if (n <= 100) {
printf("A\nSangat Memuaskan");
}

return 0;
}
