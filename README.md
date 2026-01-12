*This project has been created as part of the 42 curriculum by <hahabib>.*

# Description
Libft is a custom implementation of standard C library functions. 
The goal of this project is to reproduce commonly used functions for strings, memory, character checks, conversions, and linked list manipulation.
This tasks were asisgned to us in order to gain a deep understanding of low-level C operations and memory management. 
This library serves as a foundation for future 42 projects where standard C functions may be restricted.

# Instructions
1. **Compilation**
   ```bash
   gcc -Wall -Wextra -Werror -c *.c
   ar rcs libft.a *.o

2. **Usage**
   - Include the header in your program:
     ```c
     #include "libft.h"
     ```
   - Link the compiled library when compiling your program:
     ```bash
     gcc main.c -L. -lft -o program
     ```

3. **Testing**
   - Test functions separately using small `main.c` files before including them in other projects.
   - Keep tests in separate files to avoid interfering with library compilation.


# Library Details

The library includes implementations of the following categories of functions:

- **Character checks and conversions**
  - ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_tolower, ft_toupper

- **Memory functions**
  - ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc, ft_strdup

- **String functions**
  - ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr
  - ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri

- **File descriptor output**
  - ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

- **Linked list functions**
  - t_list structure with content and next
  - ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

# Resources
- [42 Libft Project Instructions](https://projects.intra.42.fr/)
- [C Standard Library Documentation](https://en.cppreference.com/w/c)
- [TutorialsPoint C Library Functions](https://www.tutorialspoint.com/c_standard_library)
- YouTube tutorials on C standard library functions and linked lists

**AI Usage:**
- ChatGPT was used to review header structure, improve norm compliance, and provide example test code for README formatting.
- ChatGPT was also used to explain new concepts and clarify C topics when needed.
- Specific tasks assisted:
  - Code formatting and alignment
  - Struct and function pointer explanations
  - Test file structure suggestions
  - Prompting me with questions to test my knowledge and understanding of the functions I wrote

# Additional Notes
- All functions are implemented according to the 42 curriculum requirements.
- Separate test files were created to ensure proper functionality without interfering with library compilation.



