 1 #ifndef MAIN_H
 2 #define MAIN_H
 3
 4 int _putchar(char c);
 5 char *_memset(char *s, char b, unsigned int n);
 6 char *_memcpy(char *dest, char *src, unsigned int n);
 7 char *_strchr(char *s, char c);
 8 unsigned int _strspn(char *s, char *accept);
 9 char *_strpbrk(char *s, char *accept);
 10 char *_strstr(char *haystack, char *needle);
 11 void print_chessboard(char (*a)[8]);
 12 void print_diagsums(int *a, int size);
 13 void set_string(char **s, char *to);
 14 
 15 #endif
