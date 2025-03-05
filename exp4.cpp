
// To allocate appropriate access specifiers to data members of student and course class along
// with justification in comments.
// To add the details of a student using a parameterized constructor of  student class.
#include <iostream>
using namespace std;

class Student {
private:
    int id; // Encapsulated to protect student ID
    string name; // Encapsulated to protect student name


    // Constructor
    public: Student(int i, string n) : id(i), name(n) {

        cout << "Student " << name << " created.\n";
    }

    // Destructor
     ~Student() {
        cout << "Student " << name << " deleted.\n";
    }

    // Display student details
    public: void display() {

        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

class Course {
private:
    int courseID; // Encapsulated to protect course ID
    string courseName; // Encapsulated to protect course name


    // Constructor
    public: Course(int id, string name) : courseID(id), courseName(name) {

        cout << "Course " << courseName << " created.\n";
    }

    // Destructor
    ~Course() {
        cout << "Course " << courseName << " deleted.\n";
    }

    // Display course details
    public: void display() {

        cout << "Course ID: " << courseID << ", Name: " << courseName << endl;
    }
};

int main() {
    Student s(1, "Saatvik Kotwal");
    Course c(101, "Mathmatics");

    s.display();
    c.display();

    return 0;
}exp
