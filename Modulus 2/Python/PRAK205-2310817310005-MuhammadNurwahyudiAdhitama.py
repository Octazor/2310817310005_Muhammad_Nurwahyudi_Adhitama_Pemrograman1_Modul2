import math

A, B = input("").split(" ")

A = int(A)
B = int(B)

C = round(math.sqrt(B**2 - A**2))  
KELILING = A + B + C
LUAS = round((C * A) / 2)

print(f"Alas : {C} cm")
print(f"Tinggi : {A} cm")
print(f"Keliling : {KELILING} cm")
print(f"Luas : {LUAS} cm^2")
