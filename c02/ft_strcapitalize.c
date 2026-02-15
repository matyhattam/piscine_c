#include <stdio.h>

int char_is_alpha(char c) {
  if (!c) {
    return 1;
  }

  if ((c < 65 || (c > 90 && c < 97) || c > 122)) {
    return 0;
  }
  return 1;
}

char char_uper(char c) {
  if (c >= 97 && c <= 122) {
    c = c - 32;
  }
  return c;
}

char char_lower(char c) {
  if (c >= 65 && c <= 90) {
    c = c + 32;
  }
  return c;
}

char *ft_strcapitalize(char *str) {
  int i = 1;

  str[0] = char_uper(str[0]);

  while (str[i] != '\0') {
    if (char_is_alpha(str[i]) == 0) {
      while (char_is_alpha(str[i]) == 0) {
        i++;
      }
      str[i] = char_uper(str[i]);
    }
    i++;
  }
  return str;
}

int main(void) {
  char base[] = "  ''' je m'''''''appel maty quarante-deux, cinquente+et+un";
  char *final = ft_strcapitalize(base);
  printf("%s", final);
}
