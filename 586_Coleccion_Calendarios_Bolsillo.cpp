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
    int n, n2;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
    std::cin >> n2;
        std::list<int> calendars;
        for (int j = 0; j < n2; ++j)
        {
            int c;
            std::cin >> c;
            calendars.push_back(c);
        }

        auto minMax = std::minmax_element(calendars.begin(), calendars.end());

        auto diff = *minMax.second - *minMax.first - 1;

        auto result = diff - calendars.size() + 2;

        std::cout << result << std::endl;
    }
}
