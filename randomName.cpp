#include <iostream>
using namespace std;

int main () {
	string names[200], b;
	int i=0;
	while (getline(cin,b) && b != "!"){
		names[i] = b;
		i++;
	}
	int nu = i, ran;
	cout<<"All Names Saved"<<endl;
	srand(time(NULL));
	char a;
	system("clear");
	cout<<"Press any key to continue...";
	while (cin>>a && a.toLower() != 'n'){
		ran = rand() % nu;
		cout<<names[ran]<<endl;
		cout<<"Do you want another name? (Y/N) ";
	}
	return 0;
}
