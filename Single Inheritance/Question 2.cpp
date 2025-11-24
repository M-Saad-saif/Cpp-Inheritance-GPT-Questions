//Make class Animal and class Dog. Add a function sound(). Show how Dog inherits Animal.

#include <iostream>
using namespace std;

class Animal{
	public:
		 void sound(){
			cout<<"Making sound....";
		}
};

class Dog : public Animal{
	public:
		
		void sound (){
			cout<<"barking...";
		}
		
};

int main(){
	Dog d1;
	d1.sound();
}




