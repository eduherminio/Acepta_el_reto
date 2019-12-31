#include <iostream>

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
#define ORDENAR(a)              qsort((a),ARRAY_SIZE((a)),sizeof((a[0])),compare)
#define BUSQUEDA_BINARIA(a,b)   (int*) bsearch(&(b),(a),ARRAY_SIZE(a),sizeof((a[0])), compare)
#define STR_TO_CHAR(ch,str)     strcpy(ch, str.c_str());
#define GETLINE(str)            getline(std::cin, str);
const double PI = 3.1415926;

using namespace std;

// Function to return gcd of a and b
// https://www.geeksforgeeks.org/gcd-two-array-numbers/
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

// Function to find gcd of array of numbers
// https://www.geeksforgeeks.org/gcd-two-array-numbers/
int findGCD(int arr[], int n)
{
	int result = arr[0];
	for (int i = 1; i < n; i++)
	{
		result = gcd(arr[i], result);

		if (result == 1)
		{
			return 1;
		}
	}
	return result;
}

int main()
{
	while (true)
	{
		int i, v, x;
		cin >> i; cin >> v; cin >> x;

		if (i == 0 && v == 0 && x == 0)
		{
			break;
		}

		int arr[] = { i, v, x };
		int n = sizeof(arr) / sizeof(arr[0]);
		int mcd = findGCD(arr, n);

		if (mcd == 1)
		{
			cout << i + v + x << endl;
		}
		else
		{
			cout << i / mcd + v / mcd + x / mcd << endl;
		}

	}
}
