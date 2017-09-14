#include <iostream>

using namespace std;

class Circle {/*Colon is not allowed before class declaration*/
	
private: /*Colon is required before private declaration*/
	double centerX;
	double centerY;
	double radius;

public: /*Colon is required before public declaration*/
	void setCenter(double, double); /*A defined type is required before declaring method names.*/
	void setRadius(double);  /*A defined type is required before declaring method names.*/

};/*Semicolon is required after class declaration*/

class DumbBell {/*Semicolon is not allowed before class declaration*/
	public:
	int weight; /*Make weight into a public variable because it accessed outside of the class*/
	void setWeight(int);

};

void DumbBell::setWeight(int w){ /*Class methods need to be defined with class name before definition*/
	weight = w;
}

int main(){
	DumbBell bar;
	bar.setWeight(200); /*There is no constructor available for DumbBell.*/
	cout << "The weight is " << bar.weight << endl;

	return 0;
}
