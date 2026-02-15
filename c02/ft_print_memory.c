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
      ft_putchar('.');
    }
    i++;
  }
}

void print_hex_byte(unsigned char byte) {
  char hex[] = "0123456789abcdef";
  char result[2];
  result[0] = hex[byte >> 4];   // High nibble
  result[1] = hex[byte & 0x0F]; // Low nibble
  write(1, result, 2);
}

void print_adress(char *str) {
  int i = 0;
  unsigned char *addr_bytes = (unsigned char *)&str;
  while (addr_bytes[i]) {
    print_hex_byte(addr_bytes[i]);
    i++;
  }
}

void *ft_print_memory(char *str) {
  int i = 0;
  int j = 0;
  int k = 0;
  char hex_digits[] = "0123456789abcdef";

  print_adress(str);
  ft_putchar(':');
  ft_putchar(' ');

  while (str[j] != '\0') {
    ft_putchar(hex_digits[(unsigned char)str[j] / 16]);
    ft_putchar(hex_digits[(unsigned char)str[j] % 16]);
    j++;
    if (j % 2 == 0) {
      ft_putchar(' ');
    }
  }
  ft_putstr_non_printable(str);
}

int main(void) {
  char *base = "Coucou\ntu vas bien ?";
  ft_print_memory(base);
}
