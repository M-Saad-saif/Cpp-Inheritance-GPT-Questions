//Create classes Engine and Body, both with their own functions. Make a class Car that inherits both and displays complete car details.

#include <iostream>
using namespace std;

class Engine {
	protected:
		int hp;
		double cc;

	public:
		Engine() {
			hp = 0;
			cc = 0.0;
		}

		Engine(int hp, int cc) {
			this->hp =hp;
			this->cc = cc;
		}
};

class Body {
	protected:
		string color;

	public:
		Body() {
			color = "";
		}

		Body(string color) {
			this->color = color;
		}
};

class Car : public Engine, public Body {
	protected:
		string name;
		int model;

	public:
		Car() {
			name = "";
			model = 0;
		}

		void input() {
			cout<<"Enter hp: ";
			cin>>hp;

			cout<<"Enter cc: ";
			cin>>cc;

			cout<<"Enter color: ";
			cin>>color;

			cout<<"Enter name: ";
			cin>>name;

			cout<<"Enter model: ";
			cin>>model;

		}

		void display() {
			cout<<endl;
			cout<<"horsepower: "<<hp<<endl;
			cout<<"CC: "<<cc<<endl;
			cout<<"color: "<<color<<endl;
			cout<<"car name: "<<name<<endl;
			cout<<"car model: "<<model;
		}


};

int main() {
	Car c1;
	c1.input();
	c1.display();
}
