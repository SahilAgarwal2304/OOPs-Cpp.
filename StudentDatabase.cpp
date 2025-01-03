#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name, address, class_name, dob, licno, blood_gr, mobile_no;

public:
    Student() : roll(0) {}

    Student(int roll, const string& name, const string& address, const string& class_name, 
            const string& dob, const string& licno, const string& blood_gr, const string& mobile_no) 
            : roll(roll), name(name), address(address), class_name(class_name), dob(dob), 
              licno(licno), blood_gr(blood_gr), mobile_no(mobile_no) {}

    void accept() {
        cout << "\nEnter roll number: "; cin >> roll; cin.ignore();
        cout << "Enter name: "; getline(cin, name);
        cout << "Enter address: "; getline(cin, address);
        cout << "Enter class name: "; getline(cin, class_name);
        cout << "Enter DOB (dd/mm/yyyy): "; getline(cin, dob);
        cout << "Enter license number: "; getline(cin, licno);
        cout << "Enter blood group: "; getline(cin, blood_gr);
        cout << "Enter mobile number: "; getline(cin, mobile_no);
    }

    void display() const {
        cout << "\nRoll: " << roll << "\nName: " << name << "\nAddress: " << address;
        cout << "\nClass: " << class_name << "\nDOB: " << dob;
        cout << "\nLicense No: " << licno << "\nBlood Group: " << blood_gr;
        cout << "\nMobile No: " << mobile_no << endl;
    }
};

int main() {
    int ch, n;
    Student students[20];
    while (true) {
        cout << "\nMenu\n1. Accept Student Details\n2. Display All Students\n3. Exit\nEnter Choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter number of students: "; cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "\nEntering details for Student " << (i + 1) << ":\n";
                    students[i].accept();
                }
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    cout << "\nDisplaying details of Student " << (i + 1) << ":\n";
                    students[i].display();
                }
                break;
            case 3:
                return 0;
            default:
                cout << "\nInvalid choice. Please try again.";
        }
    }
}

