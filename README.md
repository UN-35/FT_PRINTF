# ft_printf

![42 Badge](https://img.shields.io/badge/1337-ft__printf-darkgreen)
![C Badge](https://img.shields.io/badge/Language-C-blue)
![Score Badge](https://img.shields.io/badge/Score-100%2F100-brightgreen)

## 🖨️ About

This project is a reimplementation of the standard C `printf()` function as part of the 42 school curriculum. The goal is to create a function that mimics the behavior of the original `printf()` without implementing buffer management.

> Because ft_putnbr() and ft_putstr() aren't enough

## 📋 Features

This implementation of `ft_printf` supports the following conversions:

| Specifier | Description |
| --------- | ----------- |
| `%c` | Prints a single character |
| `%s` | Prints a string (as defined by the common C convention) |
| `%p` | Prints a pointer in hexadecimal format |
| `%d` | Prints a decimal (base 10) number |
| `%i` | Prints an integer in base 10 |
| `%u` | Prints an unsigned decimal (base 10) number |
| `%x` | Prints a number in hexadecimal (base 16) lowercase format |
| `%X` | Prints a number in hexadecimal (base 16) uppercase format |
| `%%` | Prints a percent sign |

## 🚀 Usage

### Compilation

To compile the library, clone the repository and run:

```bash
make
```

This will generate a static library file called `libftprintf.a`.

### Linking with your program

```bash
cc -o your_program your_program.c -L. -lftprintf
```

### Function Prototype

```c
int ft_printf(const char *format, ...);
```

### Example Usage

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("Pointer: %p\n", &main);
    
    return (0);
}
```

## 📚 Code Structure

The project is implemented with a modular approach:

| File | Description |
| ---- | ----------- |
| `ft_printf.c` | Main function and format string parsing |
| `ft_putchara.c` | Handles character output with character count tracking |
| `ft_putstr.c` | Handles string output |
| `ft_putnbr.c` | Handles decimal and integer output |
| `ft_puthexa.c` | Handles hexadecimal output (both uppercase and lowercase) |
| `ft_putaddress.c` | Handles pointer address output |
| `ft_putuint.c` | Handles unsigned integer output |

## 💡 Implementation Details

- The project uses a variadic function in C (via `<stdarg.h>`) to handle a variable number of arguments.
- Each conversion specifier is handled by a dedicated function.
- The function returns the total number of characters printed.
- Memory management is kept simple with no dynamic memory allocation.
- Recursive approach is used to handle numerical conversions.

## ⚙️ Makefile Commands

| Command | Description |
| ------- | ----------- |
| `make` or `make all` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Rebuilds the library from scratch |

## 📝 Notes

- This implementation follows the 42 school norm and style guidelines.
- The function uses the write function to output characters directly to standard output.
- The implementation avoids using any forbidden functions and adheres strictly to the project requirements.

## 🧪 Testing

The implementation has been tested with various inputs and edge cases to ensure its reliability and conformity with the original `printf()` behavior. To test the library, you can create your own test files or use various available testers created by the 42 community.

---

Created by [yoelansa](https://github.com/UN-35) as part of the 1337 school curriculum.
