#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - single
 * @str: string
 * @next: points
 * Description: single linked list struct
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

#endif
