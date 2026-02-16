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
  while (i < argc - 1) {
    char *temp;
    int j = 1;
    while (j < argc - 1) {
      if (argv[j][0] > argv[j + 1][0]) {
        temp = argv[j + 1];
        argv[j + 1] = argv[j];
        argv[j] = temp;
      }
      if (argv[j][0] == argv[j + 1][0]) {
        int k = 0;
        while (argv[j][k] && argv[j][k] == argv[j + 1][k]) {
          k++;
        }
        if (argv[j][k] > argv[j + 1][k]) {
          temp = argv[j + 1];
          argv[j + 1] = argv[j];
          argv[j] = temp;
        }
      }
      j++;
    }
    i++;
  }

  i = 1;

  while (argv[i]) {
    ft_putchar(argv[i]);
    ft_putchar("\n");
    i++;
  }
}
