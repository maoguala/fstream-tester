#include "vari.h"
#pragma once //avoid header loop


void main_page()
{
    std::cout << "Test Fstream" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "(1).Write" << std::endl;
    std::cout << "(2).Read(in str)" << std::endl;
    std::cout << "(3).Delete file" << std::endl;
    std::cout << "(4).Exit\n";
    std::cout << "(5).directory" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "Enter: ";
    std::cin >> sel;
}

