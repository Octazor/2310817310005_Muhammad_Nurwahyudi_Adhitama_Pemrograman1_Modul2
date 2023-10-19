#include <stdio.h>

void main()
{   
    float phi = 3.142857;    
    float jari, tinggi, volume, luas, keliling;
    
    scanf("%f %f", &jari, &tinggi);

    printf("Volume : %.2f\n", volume = phi * jari * jari * tinggi );
    printf("Luas : %.2f\n", luas = (2 * phi * jari *jari) + (2 * phi * jari * tinggi));
    printf("Keliling : %.2f\n", keliling = 2 * phi * jari);
    
}