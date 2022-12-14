#ifndef MAIN_H_
#define MAIN_H_

/* HEADERS */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Prototypes - prototypes to tasks
 */

/* _putchar PROTOTYPE */

int _putchar(char c);

/* Tasks PROTOTYPES */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
