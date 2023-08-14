# push_swap
<div align="center">
<h1 align="center">
<img src="https://raw.githubusercontent.com/PKief/vscode-material-icon-theme/ec559a9f6bfd399b82bb44393651661b08aaf7ba/icons/folder-markdown-open.svg" width="100" />
<br>push_swap
</h1>
<h3>◦ Effortless sorting mastery":</h3>
<h3>◦ Developed with the software and tools listed below.</h3>

<p align="center">
<img src="https://img.shields.io/badge/C-A8B9CC.svg?style&logo=C&logoColor=black" alt="C" />
</p>
<img src="https://img.shields.io/github/languages/top/hystb/push_swap?style&color=5D6D7E" alt="GitHub top language" />
<img src="https://img.shields.io/github/languages/code-size/hystb/push_swap?style&color=5D6D7E" alt="GitHub code size in bytes" />
<img src="https://img.shields.io/github/commit-activity/m/hystb/push_swap?style&color=5D6D7E" alt="GitHub commit activity" />
<img src="https://img.shields.io/github/license/hystb/push_swap?style&color=5D6D7E" alt="GitHub license" />
</div>

---

## 📒 Table of Contents
- [📒 Table of Contents](#-table-of-contents)
- [📍 Overview](#-overview)
- [📂 Project Structure](#project-structure)
- [🧩 Modules](#modules)
- [🚀 Getting Started](#-getting-started)
---


## 📍 Overview

Sorting algorithm using radix method

---


## 📂 Project Structure


```bash
repo
├── action_next.c
├── actions.c
├── change_stack.c
├── fill_stack.c
├── ft_printf
│   ├── ft_printf.c
│   ├── ft_printf.h
│   ├── Makefile
│   ├── switchman.c
│   └── utils
│       ├── ft_putchar_fd.c
│       ├── ft_puthex_maj.c
│       ├── ft_puthex_min.c
│       ├── ft_puthex_ptr.c
│       ├── ft_putnbr_fd.c
│       ├── ft_putnbr_unsigned.c
│       ├── ft_putstr_fd.c
│       └── ft_strlen.c
├── libft
│   ├── ft_atoi.c
│   ├── ft_bzero.c
│   ├── ft_calloc.c
│   ├── ft_isalnum.c
│   ├── ft_isalpha.c
│   ├── ft_isascii.c
│   ├── ft_isdigit.c
│   ├── ft_isprint.c
│   ├── ft_itoa.c
│   ├── ft_lstadd_back.c
│   ├── ft_lstadd_front.c
│   ├── ft_lstclear.c
│   ├── ft_lstdelone.c
│   ├── ft_lstiter.c
│   ├── ft_lstlast.c
│   ├── ft_lstmap.c
│   ├── ft_lstnew.c
│   ├── ft_lstsize.c
│   ├── ft_memchr.c
│   ├── ft_memcmp.c
│   ├── ft_memcpy.c
│   ├── ft_memmove.c
│   ├── ft_memset.c
│   ├── ft_putchar_fd.c
│   ├── ft_putendl_fd.c
│   ├── ft_putnbr_fd.c
│   ├── ft_putstr_fd.c
│   ├── ft_split.c
│   ├── ft_strchr.c
│   ├── ft_strdup.c
│   ├── ft_striteri.c
│   ├── ft_strjoin.c
│   ├── ft_strlcat.c
│   ├── ft_strlcpy.c
│   ├── ft_strlen.c
│   ├── ft_strmapi.c
│   ├── ft_strncmp.c
│   ├── ft_strnstr.c
│   ├── ft_strrchr.c
│   ├── ft_strtrim.c
│   ├── ft_substr.c
│   ├── ft_tolower.c
│   ├── ft_toupper.c
│   ├── libft.h
│   └── Makefile
├── main.c
├── Makefile
├── push_swap.h
├── sort_big.c
├── sort.c
└── utils.c

3 directories, 67 files
```

---

## 🧩 Modules

<details closed><summary>Root</summary>

| File                                                                          | Summary                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| ---                                                                           | ---                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| [change_stack.c](https://github.com/hystb/push_swap/blob/main/change_stack.c) | The provided code snippet includes the following functionalities:-A function to get the value of the last element of a linked list.-A function to reverse a portion of an array.-A function to free memory allocated for a string array.-A function to convert the rank of each element in a linked list to its binary representation.                                                                                                                                                                                                 |
| [sort.c](https://github.com/hystb/push_swap/blob/main/sort.c)                 | The code snippet provides functionalities for sorting a list of integers using different algorithms. The "sort" function determines whether to use "sort_short" or "sort_big" based on the size of the list. "sort_short" sorts a smaller list using push and rotate operations, while "sort_big" sorts larger lists. "sort_three" handles sorting a list of size three. "is_sorted" checks if a list is already sorted. "r_or_rr" determines whether to rotate or reverse rotate the list based on the position of a specified value. |
| [action_next.c](https://github.com/hystb/push_swap/blob/main/action_next.c)   | The code snippet provides several functions related to manipulating stacks in the push swap program. These functions include rotating elements in stack A, stack B, or both, as well as pushing elements from stack B to stack A, and vice versa. The code also updates a separate list to keep track of the performed actions.                                                                                                                                                                                                        |
| [actions.c](https://github.com/hystb/push_swap/blob/main/actions.c)           | The provided code snippet contains functions for performing swap and rotate operations on two linked lists, as well as a combination of both. These functions are used in a push_swap program to manipulate stacks during sorting operations.                                                                                                                                                                                                                                                                                          |
| [utils.c](https://github.com/hystb/push_swap/blob/main/utils.c)               | The code snippet provides utility functions for a program called "push_swap". It includes functions to clear and delete linked lists, as well as functions to get the value of a node in a linked list and find the lowest value in a linked list.                                                                                                                                                                                                                                                                                     |
| [Makefile](https://github.com/hystb/push_swap/blob/main/Makefile)             | The provided code snippet is a Makefile that manages the build process for a program called "push_swap". It compiles multiple C source files, linking with two libraries called libft and ft_printf, to generate the final executable. It also provides targets for cleaning and recompiling the code.                                                                                                                                                                                                                                 |
| [fill_stack.c](https://github.com/hystb/push_swap/blob/main/fill_stack.c)     | The provided code snippet includes a set of functions that perform operations to fill and validate a linked list. The'fill_a' function takes a string input, checks if it is a valid number, and adds it to the'a' list. Other functions handle checking for duplicate numbers, controlling the string input, and validating number ranges.                                                                                                                                                                                            |
| [sort_big.c](https://github.com/hystb/push_swap/blob/main/sort_big.c)         | The code snippet implements a set of functions to sort a list of integers in descending order using a binary sorting algorithm. It converts the integers to binary representations, ranks the list based on the integer values, and then applies binary sorting to sort the list.                                                                                                                                                                                                                                                      |
| [main.c](https://github.com/hystb/push_swap/blob/main/main.c)                 | The provided code snippet is the entry point of a program called push_swap. It takes command line arguments representing a list of numbers and performs sorting operations on that list using a specific algorithm. The main function initializes three empty linked lists (pointed by a, b, and done), fills the list a with the numbers from the command line arguments, checks for duplicate numbers, and then calls the sort function to begin the sorting process.                                                                |
| [push_swap.h](https://github.com/hystb/push_swap/blob/main/push_swap.h)       | The provided code snippet is a header file that contains declarations of various functions used in the push_swap program. These functions are responsible for manipulating and sorting linked lists. Additionally, the header file includes other necessary libraries and utility functions.                                                                                                                                                                                                                                           |

</details>

<details closed><summary>Ft_printf</summary>

| File                                                                              | Summary                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| ---                                                                               | ---                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| [ft_printf.h](https://github.com/hystb/push_swap/blob/main/ft_printf/ft_printf.h) | The provided code snippet is a header file named "ft_printf.h." It includes various function prototypes such as ft_putchar_fd, ft_putnbr_fd, ft_putstr_fd, switchman, ft_strlen, ft_puthex_ptr, ft_puthex_maj, ft_puthex_min, ft_putnbr_unsigned, and ft_printf. These functions are responsible for printing characters, numbers, and strings to a file descriptor, converting numbers to hexadecimal format, calculating string lengths, and handling formatted printing. |
| [Makefile](https://github.com/hystb/push_swap/blob/main/ft_printf/Makefile)       | This code snippet is a Makefile that compiles a library called libftprintf.a. It includes several.c files in the PROG and UTILS_PROG variables, compiles them into.o files, and then creates the library by combining the.o files using the ar rc command. The make all, clean, fclean, and re targets simplify the build and cleanup process.                                                                                                                              |
| [ft_printf.c](https://github.com/hystb/push_swap/blob/main/ft_printf/ft_printf.c) | The code snippet defines the `ft_printf` function which emulates the behavior of the printf function in C. It takes a format string and variable arguments, and then iterates through the format string to handle formatting specifiers and print the corresponding output. It returns the total number of characters printed.                                                                                                                                              |
| [switchman.c](https://github.com/hystb/push_swap/blob/main/ft_printf/switchman.c) | The code snippet is implementing a switch statement that acts as a manager for handling different conversion specifiers in a printf-style function. It takes a va_list argument and a character specifier. Based on the specifier, it performs different actions such as printing characters, strings, numbers, hexadecimals, or returning the character directly.                                                                                                          |

</details>

<details closed><summary>Utils</summary>

| File                                                                                                      | Summary                                                                                                                                                                                                                                                                                                                                                                                      |
| ---                                                                                                       | ---                                                                                                                                                                                                                                                                                                                                                                                          |
| [ft_putnbr_fd.c](https://github.com/hystb/push_swap/blob/main/ft_printf/utils/ft_putnbr_fd.c)             | The provided code snippet is a function called "ft_putnbr_fd" that prints a number to a specified file descriptor.It takes an integer "nb" and an integer "fd" as input.It converts the integer to a string, handles negative numbers, and reverse the string.Finally, it writes the string to the file descriptor.                                                                          |
| [ft_puthex_min.c](https://github.com/hystb/push_swap/blob/main/ft_printf/utils/ft_puthex_min.c)           | The provided code snippet is a function called "ft_puthex_min" that converts an unsigned long integer into its hexadecimal representation, and outputs it to the standard output. The function supports negative numbers by appending a'-' symbol in the output. It utilizes helper functions to reverse the order of the hexadecimal value and then to output it as a string of characters. |
| [ft_putchar_fd.c](https://github.com/hystb/push_swap/blob/main/ft_printf/utils/ft_putchar_fd.c)           | The code snippet defines a function, ft_putchar_fd, that takes a character and a file descriptor as input. It writes the character to the specified file descriptor using the write() system call and returns the number of bytes written. This function is likely used in a project involving formatted printing.                                                                           |
| [ft_puthex_ptr.c](https://github.com/hystb/push_swap/blob/main/ft_printf/utils/ft_puthex_ptr.c)           | This code snippet contains a function called "ft_puthex_ptr" that takes a pointer as input and prints its hexadecimal representation to the console. It handles both null pointers and non-null pointers, and converts the address to a hexadecimal string using the function "ft_put_in_hexa". The "ft_rev_in_tab" function is a helper function that reverses a given character array.     |
| [ft_putnbr_unsigned.c](https://github.com/hystb/push_swap/blob/main/ft_printf/utils/ft_putnbr_unsigned.c) | The code snippet defines a function, ft_putnbr_unsigned, that takes an unsigned integer and a file descriptor as input. It converts the integer into a string representation and prints it to the specified file descriptor. The function handles both positive and zero values and returns the number of characters written.                                                                |
| [ft_putstr_fd.c](https://github.com/hystb/push_swap/blob/main/ft_printf/utils/ft_putstr_fd.c)             | The code snippet defines a function ft_putstr_fd() that writes a string to a specified file descriptor. If the provided string is NULL, it writes "(null)" to the file descriptor. Otherwise, it writes the string using the ft_strlen() function to determine the size of the string.                                                                                                       |
| [ft_puthex_maj.c](https://github.com/hystb/push_swap/blob/main/ft_printf/utils/ft_puthex_maj.c)           | The code snippet is a function called "ft_puthex_maj" that takes an unsigned long integer as input and converts it into a hexadecimal (base 16) representation, using uppercase letters for digits 10 to 15. The function then outputs the resulting hexadecimal number to the console.                                                                                                      |
| [ft_strlen.c](https://github.com/hystb/push_swap/blob/main/ft_printf/utils/ft_strlen.c)                   | The provided code snippet defines a function called ft_strlen, which calculates the length of a given input string. It uses a loop to iterate through each character of the string until it reaches the null terminating character ('\0'), and returns the number of characters in the string.                                                                                               |

</details>

<details closed><summary>Libft</summary>

| File                                                                                      | Summary                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| ---                                                                                       | ---                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| [ft_putnbr_fd.c](https://github.com/hystb/push_swap/blob/main/libft/ft_putnbr_fd.c)       | The code snippet provides a function named "ft_putnbr_fd_lib" that outputs an integer to a specified file descriptor.-It converts the integer into a string representation.-It handles positive and negative numbers, including the special case of-2147483648.-The function uses other helper functions defined within the same file for string manipulation and output.-The code is part of a larger library named "libft.h".                                                                                                             |
| [ft_isascii.c](https://github.com/hystb/push_swap/blob/main/libft/ft_isascii.c)           | The function "ft_isascii" checks if a given character is within the ASCII range (0-127). It returns 1 if it is, and 0 otherwise. The code snippet ensures the character falls within the specified range and provides a clear result.                                                                                                                                                                                                                                                                                                       |
| [ft_tolower.c](https://github.com/hystb/push_swap/blob/main/libft/ft_tolower.c)           | The provided code snippet is for the function "ft_tolower" which converts uppercase letters to lowercase letters. It checks if the given character is within the range of uppercase letters, and if so, it adds 32 to convert it to lowercase.                                                                                                                                                                                                                                                                                              |
| [ft_memset.c](https://github.com/hystb/push_swap/blob/main/libft/ft_memset.c)             | The provided code snippet defines a function, ft_memset, which sets the value of each byte in a given memory block with a specified value. The function takes in the memory block (str) as an input, along with the value to be set (c) and the length of the memory block (len). It iterates through each byte in the memory block and assigns the specified value to it. Finally, it returns the updated memory block. The function is a part of a larger library, indicated by the inclusion of "libft.h" header file.                   |
| [ft_split.c](https://github.com/hystb/push_swap/blob/main/libft/ft_split.c)               | The code snippet is a function `ft_split` that splits a string `s` into an array of strings based on a delimiter `c`. It counts the number of words separated by the delimiter, allocates memory for the array, copies the words into the array, and returns the array. If there's an error in memory allocation, it handles the error and returns NULL.                                                                                                                                                                                    |
| [ft_strlcpy.c](https://github.com/hystb/push_swap/blob/main/libft/ft_strlcpy.c)           | The provided code snippet is for the function ft_strlcpy, which is used to copy a string from source to destination with a specified length. It calculates the length of the source string, determines the number of characters to overwrite in the destination, copies the characters using ft_memmove, adds a null terminator, and returns the length of the source string.                                                                                                                                                               |
| [ft_lstdelone.c](https://github.com/hystb/push_swap/blob/main/libft/ft_lstdelone.c)       | The code snippet defines a function ft_lstdelone that takes a linked list node and a function pointer as parameters. It checks for null values, deletes the content of the node using the provided function, and then frees the memory of the node.                                                                                                                                                                                                                                                                                         |
| [ft_lstadd_front.c](https://github.com/hystb/push_swap/blob/main/libft/ft_lstadd_front.c) | The code snippet is a function called ft_lstadd_front that adds a new node, specified by the'new' parameter, to the front of a doubly linked list, specified by the'lst' parameter. It handles cases where the list is empty and updates the'previous' and'next' pointers accordingly.                                                                                                                                                                                                                                                      |
| [ft_strnstr.c](https://github.com/hystb/push_swap/blob/main/libft/ft_strnstr.c)           | The code snippet implements the ft_strnstr() function, which searches for a substring within a given length in a string. It returns a pointer to the first occurrence of the substring or null if not found.                                                                                                                                                                                                                                                                                                                                |
| [ft_lstmap.c](https://github.com/hystb/push_swap/blob/main/libft/ft_lstmap.c)             | The provided code snippet contains the implementation of a function called "ft_lstmap". This function takes a linked list, a function pointer, and another function pointer as parameters. It creates a new linked list by applying the given function to each element of the original linked list. The first function pointer is used to apply a transformation to each element, and the second function pointer is used to delete the content of any new node in case of an error. The function returns a pointer to the new linked list. |
| [ft_isdigit.c](https://github.com/hystb/push_swap/blob/main/libft/ft_isdigit.c)           | The provided code snippet defines a function "ft_isdigit" that checks if a given character is a digit. It returns 1 if the character is a digit and 0 otherwise.                                                                                                                                                                                                                                                                                                                                                                            |
| [ft_putendl_fd.c](https://github.com/hystb/push_swap/blob/main/libft/ft_putendl_fd.c)     | The code defines a function `ft_putendl_fd` that takes a string `s` and an integer file descriptor `fd` as arguments. It writes the string followed by a newline character to the specified file descriptor using the write() function from the libft library.                                                                                                                                                                                                                                                                              |
| [ft_lstlast.c](https://github.com/hystb/push_swap/blob/main/libft/ft_lstlast.c)           | The provided code snippet is a function called ft_lstlast that takes in a linked list and returns a pointer to the last element in the list. The function iterates through the list and keeps moving to the next element until it reaches the last one. If the list is empty, it returns NULL.                                                                                                                                                                                                                                              |
| [ft_strncmp.c](https://github.com/hystb/push_swap/blob/main/libft/ft_strncmp.c)           | The provided code is an implementation of the ft_strncmp function, which compares the first n characters of two strings (s1 and s2). It returns an integer value that indicates the difference between the characters.                                                                                                                                                                                                                                                                                                                      |
| [ft_putchar_fd.c](https://github.com/hystb/push_swap/blob/main/libft/ft_putchar_fd.c)     | The code snippet defines a function named ft_putchar_fd_lib that writes a single character (c) to the given file descriptor (fd). It uses the write function from the libft.h library.                                                                                                                                                                                                                                                                                                                                                      |
| [ft_strdup.c](https://github.com/hystb/push_swap/blob/main/libft/ft_strdup.c)             | The code snippet provides the implementation of "ft_strdup" function, which creates a duplicate string with the same contents as the input "src" string. It allocates memory for the duplicate string, copies each character from "src" to the new string, and terminates it with a null character.                                                                                                                                                                                                                                         |
| [ft_strmapi.c](https://github.com/hystb/push_swap/blob/main/libft/ft_strmapi.c)           | The code snippet is for the function ft_strmapi, which takes a string and a function as input. It creates a new string by applying the function to each character in the input string, with the index of the character passed as the first argument to the function. The resulting string is then returned.                                                                                                                                                                                                                                 |
| [ft_toupper.c](https://github.com/hystb/push_swap/blob/main/libft/ft_toupper.c)           | The provided code snippet is a function called ft_toupper, which takes a character as an argument and converts it to uppercase if it is a lowercase letter. It returns the updated character. It is part of the "libft" library.                                                                                                                                                                                                                                                                                                            |
| [ft_lstclear.c](https://github.com/hystb/push_swap/blob/main/libft/ft_lstclear.c)         | The code snippet provides the implementation of `ft_lstclear` function in the Libft library. This function clears/deletes all the elements of a linked list by applying the provided `del` function to the content of each node and freeing the memory used by each node. It also sets the head pointer to NULL.                                                                                                                                                                                                                            |
| [ft_atoi.c](https://github.com/hystb/push_swap/blob/main/libft/ft_atoi.c)                 | This code snippet implements the ft_atoi function, which converts a string representation of an integer to its corresponding integer value. It handles positive and negative signs, leading white spaces, and returns the result as a long integer.                                                                                                                                                                                                                                                                                         |
| [ft_memchr.c](https://github.com/hystb/push_swap/blob/main/libft/ft_memchr.c)             | The provided code is an implementation of the ft_memchr function, which searches for the first occurrence of a specific character'c' in the given memory block'src'. It returns a pointer to the location of the character if found, otherwise it returns a NULL pointer. The function iterates through the memory block by casting it to unsigned char pointers and compares each element with'c'.                                                                                                                                         |
| [ft_memcpy.c](https://github.com/hystb/push_swap/blob/main/libft/ft_memcpy.c)             | The provided code snippet implements the functionality of copying a specified number of bytes from one memory location (src) to another (dst) using a void pointer. It checks if both src and dst are valid memory addresses, and then performs the memcpy operation by iterating through the bytes and copying them one by one. Finally, it returns the destination pointer.                                                                                                                                                               |
| [ft_lstsize.c](https://github.com/hystb/push_swap/blob/main/libft/ft_lstsize.c)           | The code snippet defines a function "ft_lstsize" that takes a pointer to a linked list as input and returns the number of elements in the list. It does so by traversing the list and counting the elements. If the input list is NULL, it returns 0.                                                                                                                                                                                                                                                                                       |
| [ft_lstiter.c](https://github.com/hystb/push_swap/blob/main/libft/ft_lstiter.c)           | The code snippet defines a function named "ft_lstiter" that iterates through a linked list and applies a given function to each element's content. The function takes two parameters: a pointer to the head of the linked list and a pointer to a function that takes a void pointer as an argument.                                                                                                                                                                                                                                        |
| [ft_strjoin.c](https://github.com/hystb/push_swap/blob/main/libft/ft_strjoin.c)           | The ft_strjoin function takes two strings, s1 and s2, and concatenates them into a new string. It dynamically allocates memory for the new string and returns a pointer to it. If either s1 or s2 is NULL or if the memory allocation fails, it returns NULL.                                                                                                                                                                                                                                                                               |
| [Makefile](https://github.com/hystb/push_swap/blob/main/libft/Makefile)                   | The code snippet is for a library called "libft.a" that includes various functions like ft_atoi, ft_bzero, ft_calloc, etc. The code compiles these functions into object files, creates the library "libft.a", and provides targets for cleaning, rebuilding, and removing the library.                                                                                                                                                                                                                                                     |
| [ft_isalnum.c](https://github.com/hystb/push_swap/blob/main/libft/ft_isalnum.c)           | The code snippet defines a function ft_isalnum that checks if a given character is alphanumeric. It returns 1 if the character is a letter or a digit, and 0 otherwise. The function takes an integer input representing the ASCII value of the character.                                                                                                                                                                                                                                                                                  |
| [ft_substr.c](https://github.com/hystb/push_swap/blob/main/libft/ft_substr.c)             | The provided code snippet is a function called ft_substr that takes in a string, a start index, and a length and returns a substring from the given string starting at the specified index and with the specified length. The function allocates memory for the substring and takes into account edge cases such as invalid inputs and the length exceeding the length of the original string.                                                                                                                                              |
| [ft_strchr.c](https://github.com/hystb/push_swap/blob/main/libft/ft_strchr.c)             | The provided code is the implementation of the ft_strchr function in the Libft library. This function searches for the first occurrence of a specific character in a given string and returns a pointer to that character if found, or NULL if not found.                                                                                                                                                                                                                                                                                   |
| [ft_striteri.c](https://github.com/hystb/push_swap/blob/main/libft/ft_striteri.c)         | The provided code snippet is an implementation of the ft_striteri function. It takes in a string (s) and a function pointer (f) as arguments. The function iterates through each character of the string and applies the given function to the index and the character at that index.                                                                                                                                                                                                                                                       |
| [libft.h](https://github.com/hystb/push_swap/blob/main/libft/libft.h)                     | The provided code snippet is a header file that contains the declarations of various functions and the definition of a linked list structure. These functions include string manipulation, memory operations, and linked list operations. Some notable functions are string manipulation functions like strstr(), strtok(), and memory functions like memcpy(), memset(). The linked list structure has fields for content, rank, next, and previous pointers.                                                                              |
| [ft_putstr_fd.c](https://github.com/hystb/push_swap/blob/main/libft/ft_putstr_fd.c)       | The provided code defines a function named ft_putstr_fd_lib that takes a string and a file descriptor as arguments. This function writes the string to the specified file descriptor using the write system call from the libc library. If the string is NULL, the function does nothing.                                                                                                                                                                                                                                                   |
| [ft_calloc.c](https://github.com/hystb/push_swap/blob/main/libft/ft_calloc.c)             | The provided code snippet defines a function called ft_calloc, which dynamically allocates a block of memory for an array of elements. It takes two parameters:'count', which represents the number of elements to allocate, and'size', which represents the size of each element. The function makes use of the malloc function to request memory space, checks for any allocation errors, initializes the allocated memory to zero using the ft_bzero function, and then returns a pointer to the memory block.                           |
| [ft_isalpha.c](https://github.com/hystb/push_swap/blob/main/libft/ft_isalpha.c)           | The provided code snippet is a function called `ft_isalpha` that determines whether a character is an alphabetic letter (a-z or A-Z). It takes a single parameter of type `int` representing the character and returns 1 if it is alphabetic and 0 if it is not. The function checks if the character falls within the ASCII range for lowercase letters (97-122) or uppercase letters (65-90).                                                                                                                                             |
| [ft_itoa.c](https://github.com/hystb/push_swap/blob/main/libft/ft_itoa.c)                 | The provided code snippet is a function called ft_itoa, which converts an integer value into a string.It handles positive and negative numbers, as well as the special case of the minimum integer value.The function uses helper functions to determine the size of the integer, to reverse the string, and to allocate and fill the string accordingly.A string result is returned by the function.                                                                                                                                       |
| [ft_strlcat.c](https://github.com/hystb/push_swap/blob/main/libft/ft_strlcat.c)           | The `ft_strlcat` function concatenates two strings `src` and `dst`, safely appending `src` to the end of `dst` and ensuring the final string remains null-terminated. It also ensures that the resulting string doesn't exceed a given `size` buffer length. The function returns the length of the resulting concatenated string.                                                                                                                                                                                                          |
| [ft_strtrim.c](https://github.com/hystb/push_swap/blob/main/libft/ft_strtrim.c)           | The code snippet provides a function called `ft_strtrim` that trims a given string by removing leading and trailing characters specified in a set. It counts the number of leading and trailing characters to be removed, calculates the size of the trimmed string, and then creates and returns a substring with the trimmed string.                                                                                                                                                                                                      |
| [ft_memcmp.c](https://github.com/hystb/push_swap/blob/main/libft/ft_memcmp.c)             | The code snippet provides the implementation of the function ft_memcmp. This function compares the first n bytes of the memory areas pointed by s1 and s2. It returns an integer value:-negative if s1 is less than s2-positive if s1 is greater than s2-zero if they are equal                                                                                                                                                                                                                                                             |
| [ft_strlen.c](https://github.com/hystb/push_swap/blob/main/libft/ft_strlen.c)             | The provided code snippet is a part of a library function "ft_strlen", which calculates the length of a string by iterating through each character until it reaches the null-terminating character `\0`. It returns the total number of characters in the string, excluding the null character.                                                                                                                                                                                                                                             |
| [ft_bzero.c](https://github.com/hystb/push_swap/blob/main/libft/ft_bzero.c)               | The code snippet implements the function ft_bzero, which sets a given number of bytes to zero in a provided memory location. It takes a pointer to the memory and the number of bytes to be zeroed as parameters. The function iterates over the memory location and sets each byte to zero.                                                                                                                                                                                                                                                |
| [ft_lstadd_back.c](https://github.com/hystb/push_swap/blob/main/libft/ft_lstadd_back.c)   | The code snippet defines a function called "ft_lstadd_back" that adds a new t_list node to the end of a linked list. It takes two parameters: a pointer to the initial linked list and a pointer to the new node to be added. The function checks if the linked list is empty, then proceeds to iterate through the existing nodes until it reaches the last one. Finally, it updates the "next" and "previous" pointers accordingly.                                                                                                       |
| [ft_isprint.c](https://github.com/hystb/push_swap/blob/main/libft/ft_isprint.c)           | The provided code snippet implements the ft_isprint function, which determines whether a character is a printable ASCII character. It returns 1 if the character falls within the range of printable characters (32-126), and 0 otherwise.                                                                                                                                                                                                                                                                                                  |
| [ft_lstnew.c](https://github.com/hystb/push_swap/blob/main/libft/ft_lstnew.c)             | The provided code snippet is a implementation of a function called `ft_lstnew` which creates a new node for a linked list. It allocates memory for the node, assigns `content` to the node, sets `next` and `previous` pointers to NULL, and returns the new node.                                                                                                                                                                                                                                                                          |
| [ft_memmove.c](https://github.com/hystb/push_swap/blob/main/libft/ft_memmove.c)           | The provided code is an implementation of the memmove function in the C library. It copies a specified number of bytes from one memory location to another, handling potential overlaps correctly. The code checks the relative positions of the source and destination memory blocks and performs the copy accordingly.                                                                                                                                                                                                                    |
| [ft_strrchr.c](https://github.com/hystb/push_swap/blob/main/libft/ft_strrchr.c)           | This code snippet is a C function called ft_strrchr, which is part of a larger library called "libft". The function searches for the last occurrence of a specific character (c) in a given string (str). It returns a pointer to that occurrence or NULL if not found. The function utilizes a loop to iterate through the string elements and compares them to the given character.                                                                                                                                                       |

</details>

---

## 🚀 Getting Started

### 📦 Installation

1. Clone the push_swap repository:
```sh
git clone https://github.com/hystb/push_swap
```

2. Change to the project directory:
```sh
cd push_swap
```

3. Install the dependencies:
```sh
make
```

### 🎮 Using push_swap

```sh
./push_swap <all_nb_to_sort>
```

---
