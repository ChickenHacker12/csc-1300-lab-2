#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char name;
    double radius;
    const double PI = 3.14;

    //print welcome message after getting user's name
    cout << "What is your name? ";
    cin >> name;
    cout << "Hi, " << name << ", welcome to this program!\n";

        //introduce lab partners and tell fun facts about yourselves
    cout << "Our names are Lucas and Trey.\n\n";
    cout << "A fun fact about Trey is I like configuring Webpack.\n\n";
    cout << "A fun fact about Lucas is he uses Arch btw.\n\n";

        //calculate the area of user's circle
    cout << "What is the radius of your circle? ";
    cin >> radius;
    double area = PI * pow(radius, 2.0);
    cout << "\nThe area of your circle is " << area << endl << endl;

    return 0;
}