#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str) {
  int i;

  i = 0;
  while (str[i] != 0) {
    i++;
  }
  return i;
}

int ft_separator(char c, char *charset) {
  int i = 0;
  while (charset[i] != '\0') {
    if (c == charset[i]) {
      return 1;
    }
    i++;
  }
  return 0;
}

char **ft_split(char *str, char *charset) {
  char **split = malloc(sizeof(char *) * (ft_strlen(str) + 1));
  int i = 0;
  int j = 0;
  int k = 0;

  int str_len = ft_strlen(str);
  int split_len = 0;

  while (i <= str_len) {
    int l = 0;
    if (i == str_len || ft_separator(str[i], charset) == 1) {
      if (i - j > 0) {
        split_len = i;

        split[k] = malloc(sizeof(char) * (i - j + 1));

        while (j < split_len) {
          split[k][l] = str[j];
          j++;
          l++;
        }
        split[k][l] = '\0';
        j++;
        k++;
      } else {
        j++;
      }
    }
    i++;
  }

  split[k] = NULL;
  return split;
}

int main(void) {
  char *str = "maty,hattam;;;;;est;;;  ;ail leurs";
  char *charset = " ,;";

  char **arr = ft_split(str, charset);

  int i = 0;
  while (arr[i]) {
    printf("%s\n", arr[i]);
    i++;
  }
}