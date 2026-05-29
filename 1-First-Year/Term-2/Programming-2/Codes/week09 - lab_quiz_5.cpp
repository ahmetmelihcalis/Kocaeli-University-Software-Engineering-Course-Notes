#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Activity {
private:
    string name;
    vector<int> steps;

public:
    Activity(string activityName) {
        name = activityName;
    }

    void addSteps(int step) {
        if (step > 0) {
            steps.push_back(step);
        }
    }

    int getTotalSteps() const {
        int total = 0;

        for (int i = 0; i < steps.size(); i++) {
            total = total + steps[i];
        }

        return total;
    }

    int getMaxSteps() const {
        if (steps.size() == 0) {
            return 0;
        }

        int maxStep = steps[0];

        for (int i = 1; i < steps.size(); i++) {
            if (steps[i] > maxStep) {
                maxStep = steps[i];
            }
        }

        return maxStep;
    }

    void printInfo() const {
        cout << "Activity Name: " << name << endl;
        cout << "Total Steps: " << getTotalSteps() << endl;
        cout << "Maximum Steps in a Day: " << getMaxSteps() << endl;
    }
};

int main() {
    int activityCount;

    cout << "How many activities will be entered? ";
    cin >> activityCount;

    vector<Activity> activities;

    for (int i = 0; i < activityCount; i++) {
        string activityName;
        int dayCount;

        cout << "\nEnter activity name: ";
        cin >> activityName;

        Activity a(activityName);

        cout << "How many days of step data will be entered? ";
        cin >> dayCount;

        for (int j = 0; j < dayCount; j++) {
            int step;

            cout << "Enter steps for day " << j + 1 << ": ";
            cin >> step;

            a.addSteps(step);
        }

        activities.push_back(a);
    }

    for (int i = 0; i < activities.size(); i++) {
        activities[i].printInfo();
    }

    return 0;
}
