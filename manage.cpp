#include <string>
#include <iostream>
#include <vector>

using namespace std;

enum Type {A =300, B=350, C=500, D=0};

int main(){
	int id;
	vector<string> months{"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	vector<float> wage(12);

	float sum_s = 0.0, average_salary=0.0;
	string name, last_name;
	Type type;

	cout<<"Please input your personal data\n";
	cout<<"Id: ";
	cin>>id;

	cout<<"Name: ";
	cin>>name;

	cout<<"Last name: ";
	cin>>last_name;

	for(int i=0; i<12; i++){
		cout<<"Input salary of "<<months[i]<<": ";
		cin>>wage[i];
	}

	for(int i=0; i<12; i++){
		sum_s+=wage[i];
	}

	average_salary = sum_s/12.0;

	cout<<"Welcome "<<name<<" "<<last_name<<"\n";
	cout<<"The average salary of "<<name<<" "<<last_name<<" is "<<average_salary;

	char type_employee;
	cout<<"\n\nPlease input your type of employee: ";
	cin>>type_employee;

	switch (type_employee){
	case 'A':
		type = A;
		break;
	case 'B':
		type = B;
		break;
	case 'C':
		type = C;
		break;
	default:
		type = D;
		break;
	}

	return 0;
}
