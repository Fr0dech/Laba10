#pragma once

#include <iostream>
#include <vector>
#include "gorod.hpp"

namespace fr0dech {
	class strana {
	private:
		std::string s_name;
		std::vector<gorod*> s_goroda;
	public:
		strana(std::string name);
		~strana();
		void add(gorod* gorod);
		void remove(gorod* gorod);
		void print();
	};
}