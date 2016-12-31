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
  cin>>n_inputs;

  for(int i=0; i<n_inputs; i++)
  {
    string llave;

    // Entrada
    cin>> llave;
    string llave2= llave;

    int n= llave.find("-");

    llave.erase(llave.begin(), llave.begin()+n+1);
    int sz= llave2.size();
    sz=llave2.find("-");
    llave2.resize(sz);
    long long int n2= stoi(llave);//atoi(llave.c_str());
    long long int n1= stoi(llave2);
    if(!(n1%2) && ((n2-n1)==1) || !(n2%2) && (n1-n2)==1)
      cout<<"SI"<<endl;
    else
      cout<<"NO"<<endl;
  }


  return 0;
}
