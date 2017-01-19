#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	long long int n;
	int resto;

	while(true)
	{
		vector<int> v;
		string str;
		int suma=0;
		
		cin>>n;

		if(n<0)
			break;

		while(true)
		{
			resto= n%10;
			if(n < 10)
			{
				v.push_back(n);
				break;
			}
			v.push_back(resto);
			n=n/10;
		}

		for(int i=v.size()-1; i>-1; i--)
		{
			suma+=v[i];
			str+= (to_string(v[i]) + " + ");
		}

		string output= str.substr(0, str.size()-3);

		cout<<output << " = "<<suma<<endl;
	}

	return 0;
}