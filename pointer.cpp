#include <iostream>

using namespace std;

int main(){
	int id = 20;
	int *ad_id = &id;
	int *ad_p1 = ad_id;
	*ad_p1 = 40;
	// ad_p1 = 40; -> Error
	cout<<"Value: "<<id<<endl;	
	cout<<"Address: "<<ad_id<<endl;
	cout<<"Address: "<<ad_p1<<endl;
	cout<<"Value tought pointer: "<<*ad_p1<<endl;	
	return 0;
}
