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

  int split_len = 0;

  while (str[i] != '\0') {
    int l = 0;
    while (str[i] != '\0' && ft_separator(str[i], charset) != 1) {
      i++;
    }
    if (ft_separator(str[i], charset) == 1) {
      split_len = i;
    }
    // printf("%d ", split_len);
    // printf("%d ", j);
    split[k] = malloc(sizeof(char) * 50);
    while (j < split_len) {
      split[k][l] = str[j];
      j++;
      l++;
    }
    i++;
    k++;
  }
  split[k] = NULL;
  return split;
}

int main(void) {
  char *str = "maty,hattam est ;ailleurs";
  char *charset = " ,;";

  char **arr = ft_split(str, charset);

  int i = 0;
  while (arr[i]) {
    printf("%s\n", arr[i]);
    i++;
  }
}
