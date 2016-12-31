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


int main()
{
  int input, output;
  while(cin>>input)
  {
    output=0;

    if (input==0)
      break;

    while(input)
    {
      output+=input;
      input--;
    }
    cout<<3*output<<endl;
  }


  return 0;
}
