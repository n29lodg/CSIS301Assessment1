/*
  Function from K&R p. 29 to read in a line of the input, renamed
  to get_line to avoid name conflict with C stdio's getline function.
*/

#include <stdio.h>

/* get_line: read a line into s, return length */
int get_line(char s[], int lim) {

  int c, i;

  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

