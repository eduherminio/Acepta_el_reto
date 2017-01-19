#include <iostream>
#include <string>   // string::erase()

using namespace std;

int main()
{
	int n;

	cin>>n;
	cin.ignore();   // So that getline() can be used

	for(int i=0; i<n; i++)
	{
		string sentence;

		getline(cin,sentence);
		sentence.erase(sentence.begin(), sentence.begin()+ 4);
		cout<< "Hola, " << sentence <<"."<<endl;
	}
}
