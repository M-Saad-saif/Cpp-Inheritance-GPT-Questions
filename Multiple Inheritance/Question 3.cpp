//Create classes Father and Mother with different methods. Make class Child that inherits both and calls all methods.

#include <iostream>
using namespace std;

class Father {
	public:
		void fatherWork() {
			cout << "Father works in office." << endl;
		}
};

class Mother {
	public:
		void motherWork() {
			cout << "Mother manages home." << endl;
		}
};

class Child : public Father, public Mother {
	public:
		void childWork() {
			cout << "Child goes to school." << endl;
		}
};

int main() {
	Child c;

	c.fatherWork();
	c.motherWork();
	c.childWork();

	return 0;
}
