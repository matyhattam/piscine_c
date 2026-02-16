#include <unistd.h>

void ft_putchar(char *str) {
  int i = 0;

  while (str[i] != '\0') {
    write(1, &str[i], 1);
    i++;
  }
}

int main(int argc, char **argv) {
  int i = 1;
  while (argv[i]) {
    ft_putchar(argv[i]);
    ft_putchar("\n");
    i++;
  }
}
