#include <stdio.h>

int ft_atoi(char *str) {
  int i = 0;
  int to_int = 0;
  int sign = 1;

  while (str[i] != '\0') {
    while (str[i] == ' ')
      i++;
    while (str[i] == '+' || str[i] == '-') {
      if (str[i] == '-') {
        sign *= -1;
      }
      i++;
    }
    if (str[i] >= 48 && str[i] <= 57) {
      while (str[i] >= 48 && str[i] <= 57) {
        to_int = to_int * 10 + str[i] - '0';
        i++;
      }
    }
  }
  return to_int * sign;
}

int main(void) {
  char *str = "--++---+1532";
  int nb = ft_atoi(str);

  printf("%d", nb);
}
