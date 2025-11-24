//Create classes Person -> Employee -> Manager. Show how attributes pass through three levels.

#include <iostream>
using namespace std;

//person class
class Person {
	protected:
		string name;
		int age;

	public:

};

//employee class inherited by person
class Employee : public Person {
	protected:
		double salary;

	public:

};

//manager calss inhertoted by employee
class Manager : Employee {
	protected:
		string sectionName; //name of section whos manager is he

	public:
		void input() {

			cout<<"Enter name: ";
			cin>>name;

			cout<<"ENter age: ";
			cin>>age;

			cout<<"Enter salary: ";
			cin>>salary;

			cout<<"Enter sectionName: ";
			cin>>sectionName;
		}

		void display() {
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
			cout << "Salary: " << salary << endl;
			cout << "Section: " << sectionName << endl;
		}

};

int main() {
	Manager m1;
	
	
	m1.input();
	m1.display();
}

