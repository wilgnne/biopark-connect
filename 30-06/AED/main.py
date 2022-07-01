import os
import sys

pastas = [p for p in os.listdir('.') if p != 'main.py']

newPasta = ['lista01_' + p for p in pastas]

for prev, new in zip(pastas, newPasta):
    os.system("mv " + prev + " " + new)
