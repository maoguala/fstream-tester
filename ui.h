#include <iostream>
#include <fstream>

#pragma once;

int sel = 0;

void main_page()
{
    std::cout << "Test Fstream" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "(1).Write" << std::endl;
    std::cout << "(2).Read(in str)" << std::endl;
    std::cout << "(3).Delete file" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "Enter: ";
    std::cin >> sel;
}