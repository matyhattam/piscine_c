#include <stdio.h>
#include <string.h>

int ft_strlen(char *str) {
  int i;

  i = 0;
  while (str[i] != 0) {
    i++;
  }
  return i;
}

char *ft_strstr(char *str, char *to_find) {
  int i = 0;

  if (ft_strlen(to_find) == 0) {
    return str;
  }

  while (str[i] != '\0') {
    char *mark = "";
    int j = 0;
    if (str[i] == to_find[j]) {
      mark = &str[i];
      while (str[i + j] == to_find[j]) {
        j++;
        if (to_find[j] == '\0') {
          return mark;
        }
      }
    }
    i++;
  }
  return 0;
}

int main(void) {
  char *needle = "aaty";
  char *haystack = "hattam maaaaaty tesdf ";

  printf("%s\n", ft_strstr(haystack, needle));
  printf("%s\n", strstr(haystack, needle));
}
