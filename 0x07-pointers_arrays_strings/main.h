#ifndef MAIN_H
#define MAIN_H

/**
* void prototypes()
* int prototypes()
*/

int_putchar(char);
char *_memset(char *s, char b, unsigned int n);
char *memcpy(char *dest, char *src, unsigned int n);
char *_stchr(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strst(char *haystack, char *needle);
void print_chessboard(char (a*)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /*MAIN_h*/
