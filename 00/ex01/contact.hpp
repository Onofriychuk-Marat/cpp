#ifndef HOTEBOK_HPP
#define HOTEBOK_HPP

#include <iostream>
#include <iomanip>

#define COUNT_FIELDS 11

class	Contact
{

private:
	std::string contact[COUNT_FIELDS];
	std::string fields[COUNT_FIELDS];

public:
	void		set_field(int index, std::string field);
	std::string get_fields(int index);
	std::string get_field_contact(int index);
	Contact();
	~Contact();
};

#endif
