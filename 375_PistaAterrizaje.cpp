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
  string input;
  while(cin>>input)
  {


    string numero(input,0,2);

    int num= stoi(numero);
    int grad= 10*num;

    string output;
    string _numero;
    string _letra;
    int _num;
    int _grad;

    if(grad<=180)
      _grad= 180+grad;
    else if (grad>180)
      _grad= grad-180;

     _num= _grad/10;
     _numero= to_string(_num);
    if(_num<10)
      _numero= "0"+_numero;

    if(input.size()==3)
    {
        string letra(input, 2);
        if(letra=="R")
          _letra="L";
        else if (letra=="L")
          _letra="R";
        else
          _letra="C";
    }
    else
        _letra="";

    output= _numero + _letra;


    cout<<output<<endl;
  }


  return 0;
}
