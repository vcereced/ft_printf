
<p align="center">
  <a>
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/1200px-42_Logo.svg.png" alt="Logo" width="200" height="200">
  </a>

  <p align="center">
    ft_printf <br>
    Project ft_printf of 42 school
    <br />
	</p>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Makefile-8A2BE2">
  <img src="https://img.shields.io/badge/C-4682B4">
  <img src="https://img.shields.io/badge/Shell-2E8B57">
  <img src="https://img.shields.io/badge/Gcc-00FF00">
</p>

## &#x1F4CC; Index 
- [✨ What is ft\_printf?](#-what-is-ft_printf)
- [💻 Usage](#-usage)
- [📖 Examples](#-examples)

## &#x2728; What is ft_printf?

This project recreate the C library printf function.

| Conversión  | Descripción|
|-------|-----------------------------------------------------------------------------------|
| %c | Print a char.   |
| **%s** | Print a string literal.  	|
| **%p** | Print void * pointer in hexadecimal.         |
| **%d** | Print a int (base 10).		|  
| **%i** | Print a int (base 10, Base 8, Base 16).  	|
| **%u** | Print a unsigned int (base 10).      |
| **%x** | Print hexadecimal in lowercase (base 16).                				|
| **%X** | Print hexadecimal in uppercase (base 16).                       				|
| **%%** | Print a '%' char                 			      |				

## &#x1F4BB; Usage

`make` to compile .a file.

`exe` to compile .a then compile the executable.

`make clean` remove .o files.

`make fclean` remove .o file and .a file.

## &#x1F4D6; Examples

For example, let's create a ``main.c`` file.

```c
// Include the header
#include "ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("This is %d!", 42);
      return (0);
}
```
Execute this command in the terminal.

```bash
make exe && ./a.out
```
Output should be:
```
This is 42!
```
