#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max) {
  int *array = malloc((max - min - 1) * sizeof(int));
  int i = 0;

  if (min > max) {
    return 0;
  }

  while (i < max - min - 1) {
    array[i] = min + 1 + i;
    i++;
  }

  return array;
}

int main(void) {
  int min = 1;
  int max = 10;
  int *array = ft_range(min, max);

  int i = 0;
  while (array[i]) {
    printf("%d", array[i]);
    i++;
  }
}
