#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaKerja;

    printf("Masukkan jam masuk: ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar: ");
    scanf("%d", &jamKeluar);

    if (jamKeluar >= jamMasuk) {
        lamaKerja = jamKeluar - jamMasuk;
    } else {
        lamaKerja = (12 - jamMasuk) + jamKeluar;
    }

    printf("Lama bekerja %d jam\n", lamaKerja);

    return 0;
}

