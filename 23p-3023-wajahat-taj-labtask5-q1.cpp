#include <iostream>
#include <string>
using namespace std;

class GenerateRollNumber {
private:
    string name;
    string rollNumber;
    static int count; 

public:
    
    GenerateRollNumber(string na) {
        name = na;
        count++; 
        rollNumber = "23P-" + to_string(1000 + count);
    }

    
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Initialize the static count variable
int GenerateRollNumber::count = 0;

int main() {
    string name1, name2, name3;

    cout << "Enter your name: ";
    cin >> name1;
    GenerateRollNumber obj1(name1);
    obj1.display();

    cout << "Enter your name: ";
    cin >> name2;
    GenerateRollNumber obj2(name2);
    obj2.display();

    cout << "Enter your name: ";
    cin >> name3;
    GenerateRollNumber obj3(name3);
    obj3.display();

    return 0;
}
