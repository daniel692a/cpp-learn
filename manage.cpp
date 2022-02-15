#include <string>
#include <iostream>

using namespace std;

int main(){
	int id;
	string name;
	string last_name;
	cout<<"Please input your personal data\n";
	cout<<"Id: ";
	cin>>id;
	cout<<"Name: ";
	cin>>name;
	cout<<"Last name: ";
	cin>>last_name;
	cout<<"Welcome "<<name<<" "<<last_name<<"\n";
	return 0;
}
