#include <string>
#include <iostream>
#include <vector>

using namespace std;

enum Type {A =300, B=350, C=500, D=0};

class Employee{
	public:
		int id;
		float average_salary;
		Type type;
		string name, last_name;
		static int date_check; //Será el mismo valor para todos los objetos creados a partir de esta clase, es como un valor compartido

		float calculate_salary();
	private:
};
int main(){

	Employee employee;

	vector<string> months{"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	vector<float> wage(12);

	float sum_s = 0.0;

	cout<<"Please input your personal data\n";
	cout<<"Id: ";
	cin>>employee.id;

	cout<<"Name: ";
	cin>>employee.name;

	cout<<"Last name: ";
	cin>>employee.last_name;

	for(int i=0; i<12; i++){
		cout<<"Input salary of "<<months[i]<<": ";
		cin>>wage[i];
	}

	for(int i=0; i<12; i++){
		sum_s+=wage[i];
	}

	employee.average_salary = sum_s/12.0;

	cout<<"Welcome "<<employee.name<<" "<<employee.last_name<<"\n";
	cout<<"The average salary of "<<employee.name<<" "<<employee.last_name<<" is "<<employee.average_salary;

	char type_employee;
	cout<<"\n\nPlease input your type of employee: ";
	cin>>type_employee;

	switch (type_employee){
	case 'A':
		employee.type = A;
		break;
	case 'B':
		employee.type = B;
		break;
	case 'C':
		employee.type = C;
		break;
	default:
		employee.type = D;
		break;
	}

	return 0;
}

//Estamos implementando y no usando
float Employee::calculate_salary(){
	return average_salary + type;
}