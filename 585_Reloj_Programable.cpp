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

bool DoubleEquals(double a, double b, double epsilon = 1e-4) { return std::abs(a - b) < epsilon; }

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        double angulo0, angulo1;

        std::cin >> angulo0; std::cin >> angulo1;

        while (angulo0 >= 360)
        {
            angulo0 -= 360;
        }
        while (angulo1 >= 360)
        {
            angulo1 -= 360;
        }
        auto possibleMinutes = std::vector<double>{
            60 * angulo0 / 360,
            60 * angulo1 / 360
        };

        auto possibleMinuteAngles = std::vector<double>{
            (360 / 12.0) * possibleMinutes[0] / 60,
            (360 / 12.0) * possibleMinutes[1] / 60
        };

        auto possibleHour0Angle = angulo0 - possibleMinuteAngles[1];
        auto possibleHour0 = possibleHour0Angle * 12 / 360;
        auto possibleHour0DecimalPart = possibleHour0 - ((int)possibleHour0);

        auto possibleHour1Angle = angulo1 - possibleMinuteAngles[0];
        auto possibleHour1 = possibleHour1Angle * 12 / 360;
        auto possibleHour1DecimalPart = possibleHour1 - ((int)possibleHour1);

        std::stringstream hour, minute;
        std::string result;

        if (possibleHour0 >= 0 && possibleHour0 < 12 && possibleHour0DecimalPart >= 0 && DoubleEquals(0, possibleHour0DecimalPart))
        {
            hour << std::setfill('0') << std::setw(2) << (int)(possibleHour0Angle * 12 / 360);
            minute << std::setfill('0') << std::setw(2) << (int)possibleMinutes[1];
            result = hour.str() + std::string(":") + minute.str();

        }
        else if (possibleHour1 >= 0 && possibleHour1 < 12 && possibleHour1DecimalPart >= 0 && DoubleEquals(0, possibleHour1DecimalPart))
        {
            hour << std::setfill('0') << std::setw(2) << (int)(possibleHour1Angle * 12 / 360);
            minute << std::setfill('0') << std::setw(2) << (int)possibleMinutes[0];
            result = hour.str() + std::string(":") + minute.str();
        }
        else
        {
            result = "ERROR";
        }

        std::cout << result << std::endl;
    }

}

