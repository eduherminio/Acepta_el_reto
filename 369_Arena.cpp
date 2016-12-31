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

int n;

int main()
{

  while(true)
  {

    cin>>n;
    if(n==0)
      break;


    FOR(0, n)
      cout<<1;

      cout<<'\n';
  }


  return 0;
}
