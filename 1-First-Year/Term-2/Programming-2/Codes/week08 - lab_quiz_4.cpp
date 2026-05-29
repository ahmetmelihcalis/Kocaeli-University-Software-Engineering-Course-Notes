#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
private:
    string name;
    vector<int> grades;

public:
    Student(string n) {
        name = n;
    }

    void addGrade(int grade) {
        grades.push_back(grade);
    }

    double getAverage() const {
        if (grades.size() == 0) {
            return 0;
        }

        int sum = 0;

        for (int i = 0; i < grades.size(); i++) {
            sum += grades[i];
        }

        return sum * 1.0 / grades.size();
    }

    void printInfo() const {
        cout << "Name: " << name << "\n";
        cout << "Average: " << getAverage() << "\n";
    }
};

int main() {
    int studentCount;

    cout << "Enter student count: ";
    cin >> studentCount;

    vector<Student> students;

    for (int i = 0; i < studentCount; i++) {
        string name;
        int gradeCount;

        cout << "Enter name: ";
        cin >> name;

        Student s(name);

        cout << "Enter grade count: ";
        cin >> gradeCount;

        for (int j = 0; j < gradeCount; j++) {
            int grade;

            cout << "Enter grade: ";
            cin >> grade;

            s.addGrade(grade);
        }

        students.push_back(s);
    }

    for (int i = 0; i < students.size(); i++) {
        students[i].printInfo();
    }

    return 0;
}
