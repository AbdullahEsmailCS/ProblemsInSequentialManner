/*

C++ Program Requirements Template

1. Program Name:
   - Student Grade Calculator

2. Program Objective:
   - The objective of this program is to allow users to input student names and their respective grades, and then calculate the average grade for the class.

3. Input Requirements:
   - Data types: string (for student names), float (for individual grades)
   - Constraints on input:
     - Student names must be unique
     - Grades must be in the range of 0.0 to 100.0
   - Source of input: User input through the console

4. Output Requirements:
   - Data types of output: string (for student names), float (for individual grades and class average)
   - Format of output: Console output displaying student names, their grades, and the class average grade
   - Destination of output: Console

5. Processing Requirements:
   - The program will store the student names and their corresponding grades in a data structure (e.g., vector, map)
   - The program will calculate the average grade by summing all the grades and dividing by the total number of students
   - The program should handle cases where there are no students or grades entered

6. User Interface Requirements:
   - The program will have a command-line interface
   - The user will be prompted to enter student names and grades
   - The program will display the student names, their grades, and the class average grade

7. Non-Functional Requirements:
   - The program should be able to handle at least 100 students
   - The program should be able to handle grades with up to two decimal places
   - The program should be well-documented and easy to maintain

8. Additional Notes or Comments:
   - This program is intended to be a simple demonstration of using C++ to store and manipulate student grade data.


*/

//------------Implementation
#include <iostream>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    vector<string> studentNames;
    map<string, float> studentGrades;

    string name;
    float grade;
    bool keepAdding = true;

    cout << "Student Grade Calculator\n";

    // Collect student names and grades
    while (keepAdding) {
        cout << "Enter student name (or 'q' to finish): ";
        cin >> name;

        if (name == "q") {
            keepAdding = false;
            continue;
        }

        // Check if student name is unique
        if (find(studentNames.begin(), studentNames.end(), name) != studentNames.end()) {
            cout << "Error: Duplicate student name. Please enter a unique name.\n";
            continue;
        }

        cout << "Enter grade for " << name << " (0.0 to 100.0): ";
        cin >> grade;

        // Validate grade range
        if (grade < 0.0 || grade > 100.0) {
            cout << "Error: Grade must be between 0.0 and 100.0. Please try again.\n";
            continue;
        }

        studentNames.push_back(name);
        studentGrades[name] = grade;
    }

    // Calculate the average grade
    float sum = 0.0;
    for (size_t i = 0; i < studentNames.size(); i++) {
        sum += studentGrades[studentNames[i]];
    }

    float average = studentNames.empty() ? 0.0 : sum / studentNames.size();

    // Display the results
    cout << "\nStudent Grades:\n";
    for (const auto& name : studentNames) {
        cout << name << ": " << fixed << setprecision(2) << studentGrades[name] << "\n";
    }

    cout << "\nClass Average: " << fixed << setprecision(2) << average << "\n";

    return 0;
}