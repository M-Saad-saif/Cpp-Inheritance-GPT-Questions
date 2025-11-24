//Write a program where Vehicle ? Car. Car should display brand and model.

#include <iostream>
using namespace std;

class vehicle{
	protected:
		string brand;
		int model;
		
	public:
		
		
};

class car : public vehicle{
	public:
		car(){
			brand = "toyota";
			model = 2025;
		}
		
		void display(){
			cout<<"brand: "<<brand<<endl;
			cout<<"model: "<<model;
		}
};

int main(){
	car c1;
	c1.display();
}
