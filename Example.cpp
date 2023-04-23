#include "Char.hpp"
#include <iostream>

int main()
{
    std::cout << (int)System::char_t::MinValue << "\n";
    std::cout << (int)System::char_t::MaxValue << "\n";

    std::cout << System::char16::MinValue << "\n";
    std::cout << System::char16::MaxValue << "\n";

    std::cout << System::char32::MinValue << "\n";
    std::cout << System::char32::MaxValue << "\n";

    return 0;
}