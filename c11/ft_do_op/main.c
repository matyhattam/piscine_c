#include "utils.h"

int ft_arrlen(char **str);
char ft_check_operator(char *c);
int ft_atoi(char *str);

int main(int argc, char **argv) {
  if (ft_arrlen(argv) < 4 || ft_arrlen(argv) > 4) {
    return 0;
  }

  char sign = ft_check_operator(argv[2]);

  if (!sign) {
    return 0;
  }

  int nb1 = ft_atoi(argv[1]);
  int nb2 = ft_atoi(argv[3]);

  ft_calcul(sign, nb1, nb2);
}
