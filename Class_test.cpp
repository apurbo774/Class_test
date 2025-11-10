#include <iostream>
#include <vector>
using namespace std;

// A simple class representing a Student
class Student {
private:
    string name;
    int id;
    vector<int> marks;

public:
    Student(string n, int i) {
        name = n;
        id = i;
    }

    void addMark(int m) {
        marks.push_back(m);
    }

    double average() {
        if (marks.empty()) return 0;
        int sum = 0;
        for (int m : marks) {
            sum += m;
        }
        return (double)sum / marks.size();
    }

    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << id << endl;

        cout << "Marks: ";
        for (int m : marks) {
            cout << m << " ";
        }
        cout << endl;

        cout << "Average Marks: " << average() << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    vector<Student> classroom;

    int totalStudents;
    cout << "Enter number of students: ";
    cin >> totalStudents;

    for (int i = 0; i < totalStudents; i++) {
        string name;
        int id;
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;

        Student s(name, id);

        int countMarks;
        cout << "How many marks to enter? ";
        cin >> countMarks;

        for (int j = 0; j < countMarks; j++) {
            int mark;
            cout << "Enter mark " << j + 1 << ": ";
            cin >> mark;
            s.addMark(mark);
        }

        classroom.push_back(s);
    }

    cout << "\n===== Student Report =====\n";
    for (Student &s : classroom) {
        s.displayInfo();
    }

    return 0;
}








//Code changed//
//-----------//
//------------------
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

