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

int h, c;

int main()
{
  while(true)
  {
      cin>>h;
      cin>>c;

      if(h==0 && c==0){
          break;}

      int n_ollas;
      n_ollas= h/c;

      if(h%c!=0)
        n_ollas+=1;

      int tiempo;
      tiempo= 10*n_ollas;

      cout<<tiempo<<endl;

  }


  return 0;
}
