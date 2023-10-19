PHI = 3.142857
Jari_jari, TINGGI = input("").split(" ")

Jari_jari = int(Jari_jari)
TINGGI = int(TINGGI)

VOLUME = round(PHI * Jari_jari * Jari_jari * TINGGI, 2)
LUAS = round((2 * PHI * Jari_jari * Jari_jari) + (2 * PHI * Jari_jari * TINGGI), 2)
KELILING = round(2 * PHI * Jari_jari, 2)

print("Volume: {:.2f}".format(VOLUME))
print("Luas: {:.2f}".format(LUAS))
print("Keliling: {:.2f}".format(KELILING))
