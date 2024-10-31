#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, hargaSetelahDiskon, diskon;

    printf("Masukkan kode barang: ");
    scanf("%d", &kode);
    printf("Masukkan jenis barang (A/B/C): ");
    scanf(" %c", &jenis);
    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            printf("Jenis barang tidak valid\n");
            return 1;
    }

    hargaSetelahDiskon = harga * (1 - diskon);

    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah diskon = %.2f\n", jenis, diskon * 100, hargaSetelahDiskon);

    return 0;
}

