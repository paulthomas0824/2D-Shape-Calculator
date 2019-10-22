#include <iostream>
#include <vector>
#include <string>
#include <math.h>

#define _WIN32_WINNT 0x0500

#include <Windows.h>


using namespace std;
////////////////////////////////////////////////////
//object square
class shape1
{
	double side; // private by default
	double side2;
	
public:
	void set_side(double sideNum) { side = sideNum; }
	double get_num() const { return side; }
	void set_side2(double sideNum2) { side2 = sideNum2; }
	double get_area() const { return side * side2; }

	
};
//////////////////////////////////////////////////
//object circle
class shape2
{
	
	double r = NULL;
	double pi = 3.14159265;
	double diameter = NULL;

	

public:
	void set_radius(double radius) { r = radius; }
	double get_radius() const { return r; }
	double get_circle_area() { return (r * r) * pi;}
	void set_diameter(double diameter) { diameter = diameter; }
	double get_diameter() const { return pow(r, 2); }

};

////////////////////////////////////////////////////
// object triangle

class shape3
{
	double b = NULL;
	double h = NULL;
	double oneHALF = .5;


public:
	void set_base(double base) { b = base; }
	double get_base() const { return b; }

	void set_height(double height) { h = height; }
	double get_height() const { return h; }

	double get_area() { return ((b * h) * (oneHALF)); }
	



};
////////////////////////////////////////////////
// Object Trapezoid
class shape4
{
	double bA = NULL;
	double bB = NULL;
	double h = NULL;
	

public:
	void set_baseA(double baseA) { bA = baseA; }
	double get_baseA() const { return bA; }

	void set_baseB(double baseB) { bB = baseB; }
	double get_baseB() const { return bB; }

	void set_height(double height) { h = height; }
	double get_height() const { return h; }
	
	double get_area() const { return ((bA + bB) * (h) / 2); }




	

};
////////////////////////////////////////////////
// object Ellipse
class shape5
{
	double aA = NULL;
	double aB = NULL;
	double pi2 = 3.14159265;
public:
	void set_axisA(double axisA) { aA = axisA; }
	double get_axisA() const { return aA; }

	void set_axisB(double axisB) { aB = axisB; }
	double get_axisB() const { return aB; }

	double get_area() const { return ((pi2 * aA * aB)); }

private:

};
////////////////////////////////////////////////
// Object Sector
class shape6
{
	double r = NULL;
	double a = NULL;
	double pi3 = 3.14159265;
	
public:
	void set_radius(double radius) { r = radius; }
	double get_radius() const { return r; }

	void set_angleinRadians(double angleinRadians) { a = angleinRadians; }
	double get_angleinRadians() const { return a; }

	double get_area() { return a/360 * pi3 * r * r; }



private:

};



//main function
int main()
{

	string choice;

	//for circle
	shape2 circle;
	double radius = 0;
	double pi = 3.14159265;

	//for square
	shape1 square;
	double side1 = 0;
	double side2 = 0;

	//for triangle
	shape3 triangle;
	double base = NULL;
	double height = NULL;
	double oneHALF = .5;

	//for trapezoid
	shape4 trapezoid;
	double baseA = NULL;
	double baseB = NULL;
	double trapHeight = NULL;
	
	//for Ellipse
	shape5 Ellipse;
	double axisA;
	double axisB;
	double pi2 = 3.14159265;

	//for Sector
	shape6 Sector;
	double radius2;
	double angle;

	//Resizing the Console
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions

	//MoveWindow(window_handle, x, y, width, height, redraw_window);
	MoveWindow(console, r.left, r.top, 1100, 600, TRUE);
	//Start of Main Output

	do
	{
		
		cout << "Welcome to the 2D Shape Surface Area Calculator.\n Please Select A 2D Shape Below\n";
		cout << "1. Square\n2. Circle\n3. Triangle\n4. Trapezoid\n5. Ellipse\n6.Sector \n7.EXIT The Program\nSelect the Shape by typing in the number corresponding with"
			" the shape, and then press the [ENTER] button on your KEYBOARD. " << endl;

		cin >> choice;
		if (choice == "1" || choice == "1.")
		{
			cout << "Enter the length of side 1: " << endl;
			cin >> side1;
			cout << "Enter the length of side 2: " << endl;
			cin >> side2;

			square.set_side(side1);
			square.set_side2(side2);

			cout << "Area of square is: " << square.get_area() << endl;
		}
		if (choice == "2" || choice == "2.")
		{
			printf("What is the radius of the circle: \n");
			cin >> radius;

			circle.set_radius(radius);
			cout << "The radius of the circle is: " << circle.get_radius() << endl;
			cout << "The area of the circle is: " << circle.get_circle_area() << endl;
			cout << "The Diameter of the circle is : " << circle.get_diameter() << endl;
		}
		if (choice == "3" || choice == "3.")
		{
			printf("What is the base of the triangle? \n");
			cin >> base;
			printf("What is the height of the triangle? \n");
			cin >> height;
			triangle.set_base(base);
			triangle.set_height(height);
			cout << "The Area of the Triangle is " << triangle.get_area() << endl;

		}
		if (choice == "4" || choice == "4.")
		{
			printf("What is the length of Base A \n");
			cin >> baseA;
			printf("What is the length of Base B \n");
			cin >> baseB;
			printf("What is the height of the Trapezoid \n");
			cin >> trapHeight;

			trapezoid.set_baseA(baseA);
			trapezoid.set_baseB(baseB);
			trapezoid.set_height(trapHeight);
			cout << "The area of the Trapezoid is " << trapezoid.get_area() << endl;
		}
		if (choice == "5" || choice == "5.")
		{
			cout << "What is the length of Axis A? \n";
			cin >> axisA;
			cout << "What is the lenght of Axis B? \n";
			cin >> axisB;

			Ellipse.set_axisA(axisA);
			Ellipse.set_axisB(axisB);
			cout << "The area of your Ellipse is " << Ellipse.get_area() << endl;
		}
		if (choice == "6" || choice == "6.")
		{
			cout << "Please enter in the Radius of the Sector. " << endl;
			cin >> radius2;
			cout << "Please enter in the Angle in Degrees. EX: 25, 120. " << endl;
			cin >> angle;

			Sector.set_angleinRadians(angle);
			Sector.set_radius(radius2);
			cout << "The Surface Area of your Sector is " << +Sector.get_area() << endl;

		}
		system("PAUSE");
		system("cls");
	} while (choice != "7");

	if (choice == "7" || choice == "7.");
	{
		system("EXIT");
	}

	
	

	return (0);
}
