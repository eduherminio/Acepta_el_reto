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

int calculate_mcd(std::list<int> args)
{
	int min = *std::min_element(args.begin(), args.end());
	for (int i = min; i > 0; --i)
	{
		bool success = true;
		for (int arg : args)
		{
			if (arg % i != 0)
			{
				success = false;
				break;
			}
		}

		if (success == true)
		{
			return i;
		}
	}

	return 1;
}

int main()
{
	int n_inputs;
	cin >> n_inputs;
	for (int w = 0; w < n_inputs; ++w)
	{
		int x_jug, y_jug, z_jug;
		int x_caja, y_caja, z_caja;

		cin >> x_jug; cin >> y_jug; cin >> z_jug; cin >> x_caja; cin >> y_caja; cin >> z_caja;

		auto jug = std::vector<int>{ x_jug, y_jug, z_jug };
		auto caja = std::vector<int>{ x_caja, y_caja, z_caja };

		auto p_jug_min = std::min_element(jug.begin(), jug.end());
		auto p_caja_min = std::min_element(caja.begin(), caja.end());

		int jug_min = *p_jug_min;
		int caja_min = *p_caja_min;

		if (jug_min >= caja_min)
		{
			cout << "NO SIRVE" << endl;
			continue;
		}

		jug.erase(p_jug_min);
		caja.erase(p_caja_min);

		if (
			(jug[0] < caja[0]
				&& jug[1] < caja[1])
			|| (jug[0] < caja[1]
				&& jug[1] < caja[0]))
		{
			cout << "SIRVE" << endl;
		}
		else
		{
			cout << "NO SIRVE" << endl;
		}
	}
}
