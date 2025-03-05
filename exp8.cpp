
#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    string result;

public:
    // Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Student " << name << " created.\n";
    }

    // Function to update student details
    void setDetails(int newID, string newName) {
        id = newID;
        name = newName;
        cout << "Updated Student: ID = " << id << ", Name = " << name << endl;
    }

    // Function to add result
    void setResult(string r) {
        result = r;
        cout << "Result added for " << name << ": " << result << endl;
    }

    // Function to display student details
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Function to get result
    void getResult() {
        cout << "Result for " << name << ": " << result << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student " << name << " deleted.\n";
    }
};

int main() {
    // Create student object
    Student s(1, "Saatvik");

    // Display details
    s.display();

    // Update details
    s.setDetails(2, "Arjun");

    // Add result
    s.setResult("A+");

    // Get result
    s.getResult();

    return 0;
}
