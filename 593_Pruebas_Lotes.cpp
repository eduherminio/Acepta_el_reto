// Copy XXX.in file content to input.in

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>   // string(str, i, length), stoi(str), to_string(num), getline(cin, str)
#include <cstring>  // strcpy, etc.
#include <cmath>    // abs, ceil, floor, (ll)round, trunc, nearbyint, copysign(n, +-1,fmax, fmin)
#include <cctype>   // isupper, islower, toupper, tolower
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <algorithm> // (see below) find, min, max, reverse, rotate...
#include <vector>
#include <list>

#define ARRAY_SIZE(a)           (sizeof((a))/sizeof((a[0])))
#define GETLINE(str)            getline(std::cin, str);

bool DoubleEquals(double a, double b, double epsilon = 1e-4) { return std::abs(a - b) < epsilon; }

int Detect(std::string str)
{
    int counter = 1;
    auto length = str.length();

    if (length != 1 && str.find('1') != std::string::npos)
    {
        auto mid = length % 2 == 1
            ? (length / 2) + 1
            : length / 2;

        auto str1 = str.substr(0, mid);
        auto str2 = str.substr(mid, str.length() - mid);

        counter += Detect(str1);
        counter += Detect(str2);
    }

    return counter;
}

int main()
{
    std::string str;
    while (true)
    {
        std::getline(std::cin, str);

        if (str == "0")
        {
            break;
        }

        std::getline(std::cin, str);

        auto result = Detect(str);

        std::cout << result << std::endl;
    }
}
