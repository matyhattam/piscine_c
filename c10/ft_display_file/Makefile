LIB = ft_display_file

all:
	clang -Wall -Wextra -Wextra -c *.c
	ar rcs ${LIB}.a *.o

clean:
	rm -f *.o

fclean: clean
	rm -f ${LIB}.a

re: fclean all

.PHONY: all clean fclean re

