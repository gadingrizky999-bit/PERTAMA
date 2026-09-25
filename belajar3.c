#include <stdio.h>

int main() {
    printf("MASUKAN JUMLAH PENARIKAN: (KETIK 0 UNTUK KELUAR)\n");
    int n, saldo;
    scanf("%d", &n);
    saldo = 9000000;

 while (n != 0){
if (n > saldo) {
    printf("SALDO TIDAK CUKUP\n");
}else if (n % 50000 != 0) {
   printf("NOMINAL BUKAN KELIPATAN 50000\n");
}else if (n < 0) {
    printf("NOMINAL TIDAK VALID\n");
}else if (n % 50000 == 0 && n <= saldo) {
    saldo = saldo - n;
    printf("PENARIKAN SEBESAR %d\n", n);
    printf("PENARIKAN BERHASIL!, SISA SALDO %d\n", saldo);
}
printf("MASUKAN JUMLAH PENARIKAN: (KETIK 0 UNTUK KELUAR)\n");
scanf("%d", &n);
}

printf("OPERASI SELESAI\n");
return 0;
}
