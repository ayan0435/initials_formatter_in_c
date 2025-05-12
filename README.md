# Initials Formatter in C

This is a simple C program that takes a full name as input (e.g., `Sheikh Mohammad Ayan`) and prints the name in two different formats:

- **British Format:** `S.M. Ayan`
- **U.S. Format:** `Ayan S.M.`

## Features

- Supports full names with first, middle, and last names.
- Ignores extra spaces at the end of input.
- Automatically converts initials to uppercase.
- Demonstrates character-by-character string handling in C.
- Uses basic C libraries: `stdio.h`, `string.h`, and `ctype.h`.

## Sample Input

Sheikh Mohammad Ayan

## Sample Output

British Initials: S.M. Ayan 
U.S. Initials: Ayan S.M.

## Code Highlights

- fgets() is used for safe string input (including spaces).
- toupper() is used to convert first characters to uppercase.
- Handles edge cases like extra spaces after the last word using a condition if (x > 0).


Author

Sheikh Mohammad Ayan
BCA 1st Year Student | Aspiring AI Engineer
Passionate about programming, logic, and building smart systems.

License

This code is free to use for educational and non-commercial purposes.
Feel free to contribute, modify, or learn from it.
