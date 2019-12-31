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

int main()
{
	int n_inputs;
	cin >> n_inputs;
	for (int w = 0; w < n_inputs; w++)
	{
		int piso, escalones_por_piso, pisos_completos, escalones_adicionales;

		cin >> piso; cin >> escalones_por_piso; cin >> pisos_completos; cin >> escalones_adicionales;

		int totales_bajada = pisos_completos * escalones_por_piso + escalones_adicionales;
		int totales_subida = totales_bajada + piso * escalones_por_piso;

		cout << totales_bajada << " " << totales_subida << endl;
	}
}
