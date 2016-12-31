#include <iostream>

#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define NO false
#define SI true
#define FOR(a,b) for(int i=(a);i<(b);i++)
#define ORDENAR(a) qsort((a),ARRAY_SIZE((a)),sizeof((a[0])),compare)

class nameClass
{
public:

  nameClass();      // Constructor

};

int n_inputs;

int main()
{
  cin>> n_inputs;

  for(int i=0; i<n_inputs; i++)
  {
    long long int n;
    long long int out;
    // Entrada
    cin>> n;

    if(n==1)
      out=1;
    else if(n==2)
      out=8;
    else
      out= 2*(n*n) + 4*(n-2)*(n-2) + (n-2)*4;

    // Salida
    cout<< out<<endl;
  }


  return 0;
}
