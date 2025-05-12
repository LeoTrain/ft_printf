# Custom C Library

This repository contains a custom implementation of a standard C library, built from scratch. It includes a wide selection of low-level functions typically found in the standard C library, as well as additional string and memory utilities. A set of bonus linked list operations is also included.

The library is designed to be lightweight, efficient, and portable — making it a solid foundation for future C projects.

## 🧱 Features

### Standard Functions

Character checks:
- `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`

Character conversions:
- `toupper`, `tolower`

String operations:
- `strlen`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strlcpy`, `strlcat`, `strdup`

Memory operations:
- `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`

Writing to file descriptor:
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

Other:
- `atoi`, `calloc`

### Additional Utility Functions

- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_itoa`, `ft_strmapi`, `ft_striteri`

### Bonus (Linked List)

A minimal singly linked list API:
- `t_list`, `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`
- `ft_lstiter`, `ft_lstmap`

## 🛠 Compilation

This library comes with a Makefile for easy build and cleanup.

### Basic Usage

```bash
make         # Compiles mandatory functions into libft.a
make bonus   # Adds bonus (linked list) functions
make clean   # Removes object files
make fclean  # Removes object files and libft.a
make re      # fclean + make
````

## 🧪 Integration

If you want to use this library in another C project:

1. Clone or copy the repository into a subfolder called `libft/`
2. Ensure your main Makefile compiles the library before your project
3. Link against `libft.a` in your compilation

Example in your Makefile:

```makefile
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

all:
	make -C $(LIBFT_DIR)
	gcc main.c $(LIBFT) -o my_program
```

## 🔗 License

This code is licensed under a **custom personal use license**.
Feel free to use it in your own projects, but please do not publish modified versions under your name without credit.

---

Enjoy building with C!
