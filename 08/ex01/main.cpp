#include "Span.hpp"

int	ft_rand() {
	return (-rand() + rand() );
}

#include <iterator>

int main()
{
	Span sp = Span(5);
	sp.addNumber(5); 
	sp.addNumber(3); 
	sp.addNumber(17); 
	sp.addNumber(9); 
	sp.addNumber(11);
	std::cout << "Shortest " << sp.shortestSpan() << std::endl; 
	std::cout << "Longest " << sp.longestSpan() << std::endl;

	Span sp2 = Span(2000);
	std::vector<int> v(2000);
	std::generate(v.begin(), v.end(), ft_rand);
	sp2.addNumber(v.begin(), v.end());
	std::cout << "Shortest " << sp2.shortestSpan() << std::endl; 
	std::cout << "Longest " << sp2.longestSpan() << std::endl;

	try
	{
		Span sp = Span(1);
		sp.addNumber(1);
		sp.addNumber(2);
	} catch(std::exception &error) {
		std::cout << error.what() << std::endl;
	}
	try
	{
		Span sp = Span(1);
		sp.addNumber(1);
		sp.shortestSpan();
	} catch(std::exception &error) {
		std::cout << error.what() << std::endl;
	} 
	try
	{
		Span sp = Span(1);
		sp.addNumber(1);
		sp.longestSpan();
	} catch(std::exception &error) {
		std::cout << error.what() << std::endl;
	} 
}