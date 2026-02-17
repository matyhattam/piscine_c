#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str) {
  int i = 0;

  while (str[i] != '\0') {
    i++;
  }
  return i;
}

void ft_putchar(char c) { write(1, &c, 1); }

void ft_rev_array(char *arr, int size) {
  int i = 0;
  int j = size - 1;
  int temp;
  while (i < size / 2) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
}

int ft_char_index(char *base, char c) {
  int i = 0;
  while (base[i]) {
    if (base[i] == c)
      return i;
    i++;
  }
  return -1;
}

int ft_check_base(char *base_from, char *base_to) {
  if (ft_strlen(base_from) < 2 || ft_strlen(base_to) < 2) {
    return 0;
  }
  return 1;
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to) {
  if (ft_check_base(base_from, base_to) == 0)
    return NULL;

  int len_from = ft_strlen(base_from);
  int len_to = ft_strlen(base_to);
  int i = 0;
  int in_decimal = 0;
  char *converted_number = malloc(ft_strlen(nbr) * 8 + 1);

  while (nbr[i] != '\0') {
    in_decimal = in_decimal * len_from + ft_char_index(base_from, nbr[i]);
    i++;
  }

  i = 0;
  int digit;
  while (in_decimal > 0) {
    digit = in_decimal % len_to;
    converted_number[i] = base_to[digit];
    in_decimal = in_decimal / len_to;
    i++;
  }

  converted_number[i] = '\0';
  ft_rev_array(converted_number, ft_strlen(converted_number));
  return converted_number;
}
int main(void) {
  char *nbr = "53252";
  char *base_from = "0";
  //   char *base_from = "01";
  //   char *base_from = "0123456789";
  //   char *base_from = "0123456789ABCDEF";

  //   char *base_to = "01";
  //   char *base_to = "0123456789";
  char *base_to = "0123456789ABCDEF";

  char *conv = ft_convert_base(nbr, base_from, base_to);
  printf("%s", conv);
}
