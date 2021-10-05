#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"

int mystrlen(char *s) {
  int i = 0;
  while (np[i]) {
    i++;
  }
  return i;
}

char *mystrcpy(char *dest,char *source) {
  char *mdest = dest;
  while (*source) {
    *(mdest++) = *(source++);
  }
  return dest;
}
char *mystrncat(char *dest, char *source,int n) {
  char *mdest = dest;
  while (*(mdest)) {mdest++;}
  while (n-- && source) {
    *(mdest++) = *(source++);
  }
  return dest;
}

int mystrcmp(char *s1, char *s2) {
  while (*s1 || *s2) {
    if (*s1 - *s2) {
      return *s1 - *s2;
    }
    s1++;
    s2++;
  }
  return 0;
}
