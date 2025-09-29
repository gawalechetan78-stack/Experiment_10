

#include <iostream>

using namespace std;

const float INCREMENT_RATE = 0.20f;

void apply_salary_increment(int *salary) {
    *salary += (*salary * INCREMENT_RATE);
}

int main() {
    bool hasExperience;
    bool completedResearchProject;
    bool workingOnResearch;
    bool generatedProfit;

    int salary = 250000;

    cout << "Does the employee have at least 1 year of experience? (1 for Yes, 0 for No): ";
    cin >> hasExperience;
    if (cin.fail()) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    cout << "Did the employee complete any research project? (1 for Yes, 0 for No): ";
    cin >> completedResearchProject;
    if (cin.fail()) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    cout << "Is the employee working on any ongoing research project? (1 for Yes, 0 for No): ";
    cin >> workingOnResearch;
    if (cin.fail()) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    cout << "Has the employee generated any profit for the company? (1 for Yes, 0 for No): ";
    cin >> generatedProfit;
    if (cin.fail()) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    if (hasExperience + completedResearchProject + workingOnResearch + generatedProfit >= 3) {
        apply_salary_increment(&salary);
    }

    cout << "Updated Salary: " << salary << endl;
    return 0;
}
