//Create classes Teacher and Author. Make class Person that inherits from both and prints teacher + author info.

#include <iostream>
using namespace std;

class Teacher {
	protected:
		double sal;
		int grade;

	public:
		Teacher() {
			sal =0.0;
			grade = 0;
		}

};

class Author {
	protected:
		string name;
		int age;

	public:
		Author() {
			name ="";
			age =0;
		};
};

class Person : public Teacher , public Author {
	public:

		void input() {
			cout<<"Enter name: ";
			getline(cin, name);

			cout<<"Enter age: ";
			cin>>age;

			cout<<"Enter grade: ";
			cin>>grade;

			cout<<"Enter salary: ";
			cin>>sal;
		}

		void dispplay() {
			cout<<endl;

			cout<<"name: "<<name;
			cout<<"\nage: "<<age;
			cout<<"\ngrade: "<<grade;
			cout<<"\nsalary: "<<sal;
		}

};

int main() {
	Person p1;
	p1.input();
	p1.dispplay();
}








