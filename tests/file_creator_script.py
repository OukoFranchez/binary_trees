#!/usr/bin/python3
import os

# Define the range of file names you want to create
start = 0
end = 18

# Specify the file content (you can modify this as needed)
file_content = """
#include <stdio.h>

int main(void) {
    printf("Hello, world!\\n");
    return 0;
}
"""

# Create the files
for i in range(start, end + 1):
    filename = f"{i}-main.c"
    with open(filename, 'w') as file:
        file.write(file_content)

print(f"{end - start + 1} files created: {start}-main.c to {end}-main.c")

