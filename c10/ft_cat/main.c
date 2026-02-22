#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str) {
  int i = 0;
  while (str[i] != '\0') {
    write(1, &str[i], 1);
    i++;
  }
}

int main(int argc, char **argv) {
  int input_file;
  char buffer[2000];
  if (!argv[1]) {
    char *str = "File name missing.";
    ft_putstr(str);
    return 1;
  }
  if (argv[2]) {
    char *str = "Too many arguments.";
    ft_putstr(str);
    return 1;
  }

  input_file = open(argv[1], O_RDONLY);
  if (input_file == -1) {
    char *str = "Cannot read file.";
    ft_putstr(str);
    return 1;
  }

  ssize_t bytes_read;
  while ((bytes_read = read(input_file, buffer, sizeof(buffer))) > 0) {
    ft_putstr(buffer);
  }
}
