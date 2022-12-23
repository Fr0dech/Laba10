#pragma once

#include <iostream>

namespace fr0dech {
	class gorod {
	private:
		static size_t amount;
		std::string s_name; 
		size_t s_population;
		size_t s_id;
	public:
		gorod(std::string name, size_t population);
		~gorod();
		void print();
		size_t getId();
	};
}