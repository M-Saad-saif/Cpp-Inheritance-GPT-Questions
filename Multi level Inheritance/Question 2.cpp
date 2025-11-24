//Make classes LivingThing -> Animal -> Dog. Print name, type, breed

#include <iostream>
using namespace std;

class LivingThing {
	protected:
		string name;

	public:
};

class Animal : public LivingThing {
	protected:
		string type;

	public:

};

class Dog : Animal {
	protected:
		string breed;

	public:

		Dog(string name, string type , string breed) {
			this->breed = breed;
			this->name = name;
			this->type = type;
		}

		void display() {
			cout<<"Name: "<<name<<endl;
			cout<<"Type: "<<type<<endl;
			cout<<"Breed: "<<breed;
		}
};

int main() {
	Dog d1("blackDog" , "dog", "husky");
	d1.display();
}
