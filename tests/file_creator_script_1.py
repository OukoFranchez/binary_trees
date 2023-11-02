#!/usr/bin/python3
import os

# Define the range of file names you want to create
start = 100
end = 134

# Create the empty files
for i in range(start, end + 1):
    filename = f"{i}-main.c"
    with open(filename, 'w') as file:
        pass

print(f"{end - start + 1} empty files created: {start}-main.c to {end}-main.c")

