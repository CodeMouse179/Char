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

    bool eq1 = System::char_t::Equals('a', 'A');
    std::cout << eq1 << "\n";

    bool eq2 = System::char_t::Equals('a', 'a');
    std::cout << eq2 << "\n";

    int hash1 = CharA::GetHashCode('a');
    std::cout << hash1 << "\n";

    int hash2 = CharA::GetHashCode('b');
    std::cout << hash2 << "\n";

    int number1 = CharA::GetNumericValue('1');
    std::cout << number1 << "\n";

    int number2 = CharA::GetNumericValue('a');
    std::cout << number2 << "\n";

    int type_code = System::char_t::GetTypeCode();
    std::cout << type_code << "\n";

    bool is_ascii_1 = System::char32::IsAscii(0);
    std::cout << is_ascii_1 << "\n";

    bool is_ascii_2 = System::char32::IsAscii(127);
    std::cout << is_ascii_2 << "\n";

    bool is_ascii_3 = System::char32::IsAscii(-1);
    std::cout << is_ascii_3 << "\n";

    bool is_ascii_4 = System::char32::IsAscii(128);
    std::cout << is_ascii_4 << "\n";

    bool white1 = CharA::IsWhiteSpace(0);
    std::cout << white1 << "\n";

    bool white2 = CharA::IsWhiteSpace(' ');
    std::cout << white2 << "\n";

    return 0;
}