#include "contact.hpp"

void		Contact::set_field(int index, std::string field)
{
	contact[index] = field;
}

std::string Contact::get_fields(int index)
{
	return (fields[index]);
}

std::string Contact::get_field_contact(int index)
{
	return (contact[index]);
}

Contact::Contact()
{
	fields[0] = "first name";
	fields[1] = "last name";
	fields[2] = "nickname";
	fields[3] = "login";
	fields[4] = "postal address";
	fields[5] = "email address";
	fields[6] = "phone number";
	fields[7] = "birthday date";
	fields[8] = "favorite meal";
	fields[9] = "underwear color";
	fields[10] = "darkest secret";
}

Contact::~Contact(){}