#ifndef SYSTEM_CHAR_HPP
#define SYSTEM_CHAR_HPP

#include <limits>

namespace System
{
    template<typename T>
    class Char
    {
    private:
        //static class
        Char()
        {
        }

    public:
        static const T MaxValue = std::numeric_limits<T>::max();

        static const T MinValue = std::numeric_limits<T>::min();

    public:
    };

    typedef System::Char<char> char_t;
    typedef System::Char<char16_t> char16;
    typedef System::Char<char32_t> char32;
}

#endif