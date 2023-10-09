# Search Algorithms Project

This project is part of a learning journey where you will explore various search algorithms and their applications. By the end of this project, you will have a solid understanding of different search algorithms, including linear search and binary search. Additionally, you'll be able to choose the best search algorithm depending on your specific needs.

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- What is a search algorithm?
- What is a linear search?
- What is a binary search?
- What is the best search algorithm to use depending on your needs?

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called search_algos.h
- Don’t forget to push your header file
- All your header files should be include guarded

### More Info

You will be asked to write files containing big O notations. Please use this format:

- O(1)
- O(n)
- O(n!)
- n * m -> O(nm)
- n square -> O(n^2)
- sqrt n -> O(sqrt(n))
- log(n) -> O(log(n))
- n * log(n) -> O(nlog(n))
- ...

## Getting Started

To get started with this project, you can begin by implementing the provided search algorithms. Below is the initial code for a linear search algorithm in C:

```c
#include <stdio.h>

/**
 * linear_search - Search for a value in an array using linear search.
 * @array: Pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1; // Return -1 if the array is NULL
    }

    for (size_t i = 0; i < size; i++) {
        if (array[i] == value) {
            return i; // Return the index if the value is found
        }
    }

    return -1; // Return -1 if the value is not found in the array
}
```
#run it with
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
```

You can use this code as a starting point for your project. Implement the binary search algorithm and other necessary functions to complete your learning objectives.
