#include <iostream>

#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
    string input, output;
    // Entrada
    cin>> input;
    string inicial (input, 0,1);
    char aux [2];
    strcpy(aux, inicial.c_str());

    for(int j=input.size()-1; j>-1; j--)
    {

        string letra(input,j,1);
        char c[200];
        strcpy(c, letra.c_str());

        if(j== input.size()-1 && isupper(aux[0]))
          letra=string(1,toupper(c[0]));
        else
          letra=string(1, tolower(c[0]));

        output+=letra;
    }

    cout<<output<<endl;

  }


  return 0;
}
