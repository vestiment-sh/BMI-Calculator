// BMI Calculator

#include <iostream>
using namespace std;

int main() {

        string name;    // Declaration of Variables
        double x;
        int y, z;
        cout << "Enter your Hero's name: ";
        cin >> name;
        cout << "Enter his/her weight in pounds: ";
        cin >> x;
        cout << "Enter his/her height in inches: ";
        cin >> y;
        cout << "Enter his/her year of birth (YYYY): ";
        cin >> z;
        cout << endl;
        cout << "Hero: " << name << endl;
        cout << "Weight: " << x / 2.2 << " kilograms.\n";
        cout << "Height: " << (int)(( y * 2.54) / 100) << " meter(s) and " <<(int)((y * 2.54) * 100) % 100 << " centimeter(s).\n";
        cout << "Body Mass Index (BMI): " << (x * 703) / (y * y) << endl;
        cout << "YOB: " << z << endl;

        return 0;
}
