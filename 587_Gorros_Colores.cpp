// Copy XXX.in file content to input.in

#include <iostream>
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

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::string str;
        std::cin >> str;

        int extraPoints = 0;
        for (int j = 0; j < str.length(); j = j + 2)
        {
            if (str[j] == str[j + 1])
            {
                ++extraPoints;
            }
        }

        auto result = str.length() / 2 + extraPoints;

        std::cout << result << std::endl;
    }
}
