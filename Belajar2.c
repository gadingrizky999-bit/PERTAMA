#include <stdio.h>

int main() {

int g, w, m, harga, diskon, tambahan, total;

scanf("%d %d %d", &g, &w, &m);

if (g == 1) {
    harga = 10000;
} else if (g == 2) {
    harga = 15000;
} else if (g == 3) {
    harga = 25000;
} else if (g == 4) {
    harga = 40000;
}

if ((w >= 6 && w <= 9 || w >= 16 && w <= 19)) {
    tambahan = (harga * 20 / 100);
}else tambahan = 0;
if (m == 0) {
    total = harga + tambahan;
}else if (m == 1) {
    diskon = (harga + tambahan) * 10 / 100;
    total = harga + tambahan - diskon;
}else if (m == 2 && g == 1) {
    diskon = (harga + tambahan) * 30 /100;
    total = harga + tambahan - diskon;
}else if (m == 2) {
    diskon = (harga + tambahan) * 20 / 100;
    total = harga + tambahan - diskon;
}
printf("%d\n", total);
return 0;
}
