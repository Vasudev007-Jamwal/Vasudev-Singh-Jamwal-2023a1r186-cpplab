
#include <iostream>
#include <string>
using namespace std;

class login_Details {
private:
    string defaultPassword = "1234";

public:
    bool Validate() {
        string inputPassword;
        cout << "Enter your password: ";
        cin >> inputPassword;
        if (inputPassword == defaultPassword) {
            return true;
        } else {
            cout << "Invalid password!" << endl;
            return false;
        }
    }

    void Display() {
        cout << "Welcome to MyAPP" << endl;
    }
};

class User_Profile {
private:
    string username;
    string email;
    string name;
    int rollno;
public:
    void Accept() {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter email: ";
        cin >> email;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter the roll no";
        cin >> rollno;
    }

    void Display() {
        cout << "\nUser Profile Details:" << endl;
        cout << "Username: " << username << endl;
        cout << "Email: " << email << endl;
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollno << endl;
    }
};

int main() {
    login_Details login;
    if (login.Validate()) {
        login.Display();

        User_Profile user;
        user.Accept();
        user.Display();
    }

    return 0;
}
