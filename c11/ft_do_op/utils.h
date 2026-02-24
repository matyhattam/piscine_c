#ifndef FT_DO_OP_H
#define FT_DO_OP_H

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_putnbr(int nb) {
  if (nb == -2147483648) {
    write(1, "-2147483648", 11);
    return;
  }
  if (nb < 0) {
    ft_putchar('-');
    nb = -nb;
  }
  if (nb >= 10)
    ft_putnbr(nb / 10);
  ft_putchar((nb % 10) + '0');
}
int ft_strlen(char *str) {
  int i = 0;

  while (str[i] != 0) {
    i++;
  }
  return i;
}

int ft_arrlen(char **arr) {
  int i = 0;

  while (arr[i] != 0) {
    i++;
  }
  return i;
}

char ft_check_operator(char *c) {
  if (ft_strlen(c) > 1) {
    return 0;
  }
  char *operators = "+-/%%";
  int i = 0;

  while (operators[i] != '\0') {
    if (c[0] == operators[i]) {
      return c[0];
    }
    i++;
  }
  return 0;
}

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
void ft_calcul(char sign, int nb1, int nb2) {
  if (sign == '+') {
    int sum = nb1 + nb2;
    ft_putnbr(sum);
  } else if (sign == '-') {
    int sub = nb1 - nb2;
    ft_putnbr(sub);
  } else if (sign == '/') {
    if (nb2 == 0) {
      printf("Stop : division by zero");
    }
    int div = nb1 / nb2;
    ft_putnbr(div);
  } else if (sign == '%') {
    if (nb2 == 0) {
      printf("Stop : division by zero");
    }
    int mod = nb1 / nb2;
    ft_putnbr(mod);
  }
}
#endif
