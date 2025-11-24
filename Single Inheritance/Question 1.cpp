//Create a class Person with name & age, and a class Student that inherits Person. Take input and display details.
#include <iostream>
using namespace std;

class Person {
	protected:
		string name;
		int age;

	public:
		Person() {
			name = "";
			age = 0;
		}
};

class Student : public Person{
	public:
		void input(){
			cout<<"Enter name: ";
			getline(cin, name);
			
			cout<<"Enter age: ";
			cin>>age;
		}
		
		void display(){
			cout<<"name .. "<<name<<endl;
			cout<<"age .. "<<age;
		}
		
};

int main(){
	Student s1;
	
	s1.input();
	s1.display();
}





