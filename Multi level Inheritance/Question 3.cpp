//Make Shape -> Rectangle -> Box. Calculate area then volume.

#include <iostream>
using namespace std;

class Shape {
	protected:
		int length, width, height;

	public:
		void setDimension(int length, int width, int height){
			this->length = length;
			this->width = width;
			this->height = height;	
		}
};

class Rect : public Shape {
	public:

		void area() {
			cout<<"The area of rectangle is: "<<length * width<<endl;
		}

		void volume () {
			cout<<"the volume of rectangle is: "<<length * width * height<<endl;
		}
};

class Box : public Rect{
	public:
		void area() {
			cout<<"The area of Box is: "<<2*(length*width + length*height + width*height)<<endl;
		}

		void volume () {
			cout<<"the volume of Box is: "<<length * width * height<<endl;
		}

};

int main(){
	Box b1;
	b1.setDimension(4,5,6);
	b1.area();
	b1.volume();
	
	
}













