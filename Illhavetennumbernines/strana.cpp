#include "strana.hpp"


namespace fr0dech {
    strana::strana(std::string name) : s_name(name) {
        std::cout << s_name << std::endl;
    }

    strana::~strana() {
        std::cout << s_name << std::endl;
    }

    void strana::add(gorod* gorod) {
        for (size_t i = 0; i < s_goroda.size(); i++) {
            if (s_goroda[i]->getId() == gorod->getId()) {
                return;
            }
        }
        s_goroda.push_back(gorod);
    }

    void strana::remove(gorod* gorod) {
        int index = -1;

        for (size_t i = 0; i < s_goroda.size(); i++) {
            if (s_goroda[i]->getId() == gorod->getId()) {
                index = i;
                break;
            }
        }

        if (index >= 0) {
            s_goroda.erase(s_goroda.begin() + index);
        }
    }

    void strana::print() {
        std::cout << "Country: " << s_name << std::endl;
        if (s_goroda.size() > 0) {
            std::cout << "Cities: " << std::endl;
            for (size_t i = 0; i < s_goroda.size(); i++) {
                s_goroda[i]->print();

                for (size_t i = 0; i < 30; i++) {
                    std::cout << '_';
                }
                std::cout << std::endl;
            }
        }
        std::cout << "***" << std::endl;
    }
}