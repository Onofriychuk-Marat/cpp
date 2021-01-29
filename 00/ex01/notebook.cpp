#include "contact.hpp"

void	title(void)
{
	std::cout << "Hello! In this notebook you can write the following commands: ADD, SEARCH, EXIT" << std::endl;
}

Contact	get_contact(void)
{
	Contact Contact;
	std::string	field;

	for (int i = 0; i < COUNT_FIELDS; i++)
	{
		std::cout << Contact.get_fields(i) << ": ";
		std::cin >> field;
		Contact.set_field(i, field);
	}
	return (Contact);
}

void	print_field(std::string line)
{
	if (line.length() >= 10)
		std::cout << line.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << line;
}

void	print_contact(Contact people)
{
	for (int i = 0; i < COUNT_FIELDS; i++)
		std::cout << people.get_fields(i) << ": " << people.get_field_contact(i) << std::endl;
}

void	print_header(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	print_line_table(Contact *people, int index)
{
	std::cout << "|";
	print_field(std::to_string(index + 1));
	std::cout << "|";
	print_field(people[index].get_field_contact(0));
	std::cout << "|";
	print_field(people[index].get_field_contact(1));
	std::cout << "|";
	print_field(people[index].get_field_contact(2));
	std::cout << "|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;

}

void	add_contact(Contact *people, int *count_people)
{
	if (*count_people == 8)
	{
		std::cout << "the notebook only holds 8 people!" << std::endl;
		return ;
	}
	people[*count_people] = get_contact();
	std::cout << "Contact added!" << std::endl;
	(*count_people)++;
}

void	search_contact(Contact *people, int count_people, std::string command)
{
	int			index;
	std::string	str;

	print_header();
	for (int i = 0; i < count_people; i++)
		print_line_table(people, i);
	std::cout << "Enter Index to display Informations or 0 to Exit." << std::endl;
	std::cout << "index: ";
	std::cin >> str;
	index = std::atoi(str.c_str());
	if (!index)
		return ;
	if (index > count_people)
	{
		std::cout << "There is no contact with such an index!" << std::endl;
		return ;
	}
	print_contact(people[index - 1]);
}

int		main(void)
{
	Contact		people[8];
	int			count_people;
	std::string	command;

	count_people = 0;
	title();
	while (1)
	{
		std::cout << "Your command: ";
		std::cin >> command;
		if (command == "EXIT")
			exit(0);
		else if (command == "ADD")
			add_contact(people, &count_people);
		else if (command == "SEARCH")
			search_contact(people, count_people, command);	
	}
	return (0);
}
