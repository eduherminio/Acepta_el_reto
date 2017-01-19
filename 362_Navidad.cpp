#include <iostream>

using namespace std;

int main()
{
	long long int n_inputs;
	int day, month;

	cin>>n_inputs;

	for(int i=0; i<n_inputs; i++)
	{
		cin>>day;
		cin>>month;

		if(day==25 && month== 12)
			cout<<"SI"<<endl;
		else
			cout<<"NO"<<endl;
	}


	return 0;
}