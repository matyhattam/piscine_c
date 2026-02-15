#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) {
  int i = 0;

  while (s1[i] != '\0' && s2[i] != '\0') {
    if (s1[i] != s2[i] || i >= n - 1) {
      return (unsigned char)s1[i] - (unsigned char)s2[i];
    }
    i++;
  }
  return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main(void) {
  char *str1 = "test maty";
  char *str2 = "test mat";

  printf("%d", ft_strncmp(str1, str2, 10));
}
