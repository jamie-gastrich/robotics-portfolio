#include <iostream>
#include <string>

using namespace std;

int main() {
    string robot_name;
    cout << "Enter the name of your robot: ";
    getline(cin, robot_name);
    cout << "Hello, " << robot_name << "!" << endl;
    return 0;
}