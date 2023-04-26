#ifndef SYSTEM_CHAR_HPP
#define SYSTEM_CHAR_HPP

#include <limits>

#define CharA System::Char<char>
#define CharW System::Char<wchar_t>
#define Char8
#define Char16 System::Char<char16_t>
#define Char32 System::Char<char32_t>

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
        static bool Equals(T c1, T c2)
        {
            return c1 == c2;
        }

        static int GetTypeCode()
        {
            return 4;
        }

        static bool IsAscii(T c)
        {
            return IsBetween(c, 0, 127);
        }

        static bool IsBetween(T c, T minInclusive, T maxInclusive)
        {
            return (c >= minInclusive && c <= maxInclusive) ? true : false;
        }
    };

    typedef System::Char<char> char_t;
    typedef System::Char<char> chara;
    typedef System::Char<wchar_t> charw;
    typedef System::Char<char16_t> char16;
    typedef System::Char<char32_t> char32;
}

#endif