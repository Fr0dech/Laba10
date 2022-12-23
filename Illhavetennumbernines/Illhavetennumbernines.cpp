#include "strana.hpp"
#include "gorod.hpp"

int main() {
	setlocale(LC_ALL, "Russian");

	fr0dech::strana* strana = new fr0dech::strana("Niger");
	fr0dech::gorod* gorod1 = new fr0dech::gorod("Niamey", 829255);
	fr0dech::gorod* gorod2 = new fr0dech::gorod("Zinder", 202072);
	fr0dech::gorod* gorod3 = new fr0dech::gorod("Maradi", 171603);
	fr0dech::gorod* gorod4 = new fr0dech::gorod("Agadez", 94682);

	strana->add(gorod1);
	strana->add(gorod2);
	strana->add(gorod3);
	strana->add(gorod4);
	strana->print();

	delete strana;
}