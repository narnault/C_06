#include <unistd.h>

void	ft_putstr(char *str) {
	int	i;

	i = 0;
	while (str[i]) {
		write (1, &str[i], 1);
		i++;
	}
}

int main (int argc, char *argv[]) {

	(void) argc;
	ft_putstr(*argv);
	return (0);
}
