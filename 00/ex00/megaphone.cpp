#include <iostream>

void	print_message(char **argv)
{
	while (*argv)
	{
		while (**argv)
		{
			if (**argv >= 97 && **argv <= 122)
				std::cout << static_cast<char>(**argv - 32);
			else
				std::cout << **argv;
			(*argv)++;
		}
		argv++;
	}
	std::cout << std::endl;
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		print_message(argv + 1);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
