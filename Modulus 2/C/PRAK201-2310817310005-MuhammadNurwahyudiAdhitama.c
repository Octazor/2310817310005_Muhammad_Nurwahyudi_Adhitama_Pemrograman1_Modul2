#include <stdio.h>

int main() {
    
    char nama[100];
    char nim[15];
    char kelas[20];
    char tempat_lahir_tanggal_lahir[50];
    char alamat[200];
    char hobby[100];
    char no_hp[15];

    printf("Nama: ");
    gets(nama);
    printf("NIM: ");
    gets(nim);
    printf("Kelas Paralel: ");
    gets(kelas);
    printf("Tempat/Tanggal Lahir: ");
    gets(tempat_lahir_tanggal_lahir);
    printf("Alamat: ");
    gets(alamat);
    printf("Hobby: ");
    gets(hobby);
    printf("No. HP: ");
    gets(no_hp);

    printf(" \n");
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", nim);
    printf("Kelas Paralel: %s\n", kelas);
    printf("Tempat/Tanggal Lahir: %s\n", tempat_lahir_tanggal_lahir);
    printf("Alamat: %s\n", alamat);
    printf("Hobby: %s\n", hobby);
    printf("No. HP: %s\n", no_hp);

    return 0;
}
