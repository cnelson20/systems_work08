#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"

#define POS(a) (a >= 0 ? 1 : -1)

int mystrlen(char *s) {
  int i = 0;
  while (s[i]) {
    i++;
  }
  return i;
}

char *mystrcpy(char *dest,char *source) {
  char *mdest = dest;
  do {
    *(mdest++) = *(source++);
  } while (*source);
  return dest;
}
char *mystrncat(char *dest, char *source,int n) {
  char *mdest = dest;
  //mdest += mystrlen(mdest);
  do {
    *(mdest++) = *(source++);
  } while (*source && n-- > 0);
  n++;
  while (n-- > 0) {*(source++) = 0;}
  return dest;
}

int mystrcmp(char *s1, char *s2) {
  while (*s1 || *s2) {
    if (*s1 - *s2) {
      return POS(*s1 - *s2);
    }
    s1++;
    s2++;
  }
  return 0;
}

char *mystrchr(char *s, char c) {
	do {
		if (*s == c) {return s;}
	} while (*(s++));
	return 0;
}
