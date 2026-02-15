#include <unistd.h>

int is_printable(char c) {
  if ((c < 32 || c > 126)) {
    return 0;
  }

  return 1;
}

void ft_putchar(char c) { write(1, &c, 1); }

void ft_putstr_non_printable(char *str) {
  int i = 0;
  char hex_digits[] = "0123456789abcdef";

  while (str[i] != '\0') {
    if (is_printable(str[i])) {
      write(1, &str[i], 1);
    } else {
      write(1, "\\", 1);
      ft_putchar(hex_digits[(unsigned char)str[i] / 16]);
      ft_putchar(hex_digits[(unsigned char)str[i] % 16]);
    }
    i++;
  }
}

int main(void) {
  char *base = "Coucou\ntu vas bien ?";
  ft_putstr_non_printable(base);
}
