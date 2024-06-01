#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

using namespace std;

// A struct to represent a task
struct Task {
    string name;
    string subject;
    int startTime; // Assuming time is represented as an integer
    int endTime;

    // Constructor for Task
    Task(const string& name, const string& subject, int startTime, int endTime)
        : name(name), subject(subject), startTime(startTime), endTime(endTime) {}
};

// Function to convert a string to lowercase
string toLowerCase(const string& str) {
    string lowerCaseStr;
    transform(str.begin(), str.end(), back_inserter(lowerCaseStr), ::tolower);
    return lowerCaseStr;
}

// Function to add a task
void addTask(vector<Task>& tasks, const string& name, const string& subject, int startTime, int endTime) {
    // Input validation and logic to add task
    tasks.push_back(Task(name, subject, startTime, endTime));
}

// Function to check for overlapping tasks
bool checkOverlap(const vector<Task>& tasks) {
    // Logic to check for overlap
    return false; // Placeholder
}

int main() {
    vector<Task> tasks;

    try {
        // User input handling and task management
        string name, subject;
        int startTime, endTime;

        // Example of adding a task
        cout << "Enter task name, subject, start time, and end time: ";
        cin >> name >> subject >> startTime >> endTime;
        addTask(tasks, name, subject, startTime, endTime);

        if (checkOverlap(tasks)) {
            cout << "Warning: Overlapping tasks detected." << endl;
        }
        // Additional functionalities
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    
    return 0;
}
