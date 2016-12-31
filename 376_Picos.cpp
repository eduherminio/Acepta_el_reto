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
  int n, altura;
  int ant, num, post;
  int n_picos;
  while(cin>>n)
  {
    if(n==0)
      break;

      vector<int> v;

      n_picos=0;
      FOR(0, n)
      {
        cin>> altura;
        v.push_back(altura);
      }



      FOR(0, v.size())
      {
        if(i>0)
          ant= v[i-1];
        else
          ant= v[v.size()-1];

        num=v[i];

        if(i==v.size()-1)
          post= v[0];
        else
          post= v[i+1];

        //  cout<<"Ant "<<ant<<" Num: "<<num<<" Post: "<<post<<endl;
        if(num>ant && num>post)
          n_picos++;
      }

      cout<<n_picos<<endl;
  }


  return 0;
}
