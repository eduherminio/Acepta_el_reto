#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long int n;
	int resto;
	vector<int> v;
	string str;

	while(true)
	{
		cin>>n;
		
		if(n==-1)
			break;

		while(resto= n%10)
		{
			v.push_back(resto);
			n=resto;
		}

		for(int i=v.size()-1; i>-1; i--)
		{
			str+= v[i] << " + "
		}

		string output= str.substr(0, str.size()-3);

		cout<<output;
	}

	for(int i=0; i<n_inputs; i++)
	{
		cout<<"Hola mundo."<<endl;
	}


	return 0;
}