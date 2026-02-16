#include <unistd.h>

void ft_putchar(char *str) {
  int i = 0;

  while (str[i] != '\0') {
    write(1, &str[i], 1);
    i++;
  }
}

int main(void) {
  char *str = "maty code en C";
  ft_putchar(str);
}
