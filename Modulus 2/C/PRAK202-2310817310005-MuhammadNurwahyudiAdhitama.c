#include <stdio.h>

int main() {

    float nilai_pertama, nilai_kedua;

    printf("Masukkan nilai pertama: ");
    scanf("%f", &nilai_pertama);
    
    printf("Masukkan nilai kedua: ");
    scanf("%f", &nilai_kedua);

    float hasil = nilai_pertama + nilai_kedua;

    printf("Hasil dari penjumlahan nilai pertama %.2f dan nilai kedua %.1f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);

    return 0;
}
