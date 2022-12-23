#include "gorod.hpp"


namespace fr0dech {
	size_t gorod::amount(0);

	gorod::gorod(std::string name, size_t population) : s_name(name), s_population(population), s_id(gorod::amount++) {
		std::cout << s_name << std::endl;
	}

	gorod::~gorod() {
		std::cout << s_name << std::endl;
	}

	void gorod::print() {
		std::cout
			<< "City "
			<< s_name
			<< std::endl
			<< "Population is around "
			<< s_population << std::endl;
	}
	size_t gorod::getId()
	{
		return s_id;
	}
}