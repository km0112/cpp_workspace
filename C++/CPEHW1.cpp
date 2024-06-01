#include <iostream>
#include <string>
using namespace std;

struct Task {
    int taskID;
    string description;
    string dueDate;
    string priority;
    Task* next;
};

Task* createAndAddTask(Task* head) {
    // Creates new node
    Task* temp = new Task;
    temp->next = nullptr;

    cout << "What is the task ID?" << endl;
    cin >> temp->taskID;
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "What is the due date of the task?" << endl;
    getline(cin, temp->dueDate);

    cout << "What is the priority of the task?" << endl;
    getline(cin, temp->priority);

    cout << "What is the task description?" << endl;
    getline(cin, temp->description);

    // Insert the new node at the beginning of the list
    temp->next = head;
    head = temp;

    return head;
}

void displayTasks(Task* head) {
    if (head == nullptr) {
        cout << "There are no tasks yet" << endl;
        return;
    }

    Task* start = head;
    while (start != nullptr) {
        cout << "Task ID: " << start->taskID << endl
             << "Task Description: " << start->description << endl
             << "Due Date: " << start->dueDate << endl
             << "Task Priority: " << start->priority << endl
             << endl;
        start = start->next;
    }
}

void searchTasks(Task* head, int ID) {
    Task* temp = head;
    while (temp != nullptr) {
        if (temp->taskID == ID) {
            cout << "Task ID: " << temp->taskID << endl
                 << "Task Description: " << temp->description << endl
                 << "Due Date: " << temp->dueDate << endl
                 << "Priority: " << temp->priority << endl
                 << endl;
            return; // Exit the function after finding the task
        }
        temp = temp->next;
    }
    cout << "Task with ID " << ID << " not found." << endl;
}

Task* deleteTask(Task* head, int ID) {
    if (head == nullptr) {
        cout << "List is already empty" << endl;
        return nullptr;
    }

    Task* current = head;
    Task* previous = nullptr;

    while (current != nullptr && current->taskID != ID) {
        previous = current;
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Task with ID " << ID << " not found." << endl;
        return head;
    }

    if (previous == nullptr) {
        // The task to delete is the head
        head = current->next;
    } else {
        previous->next = current->next;
    }

    delete current; // Use delete instead of free for C++

    return head;
}

int main() {
    Task* head = nullptr;
    int instruction, ID;

    cout << "Type 1 to add a task\n"
         << "2 to display tasks\n"
         << "3 to search for a task\n"
         << "4 to delete a task\n"
         << "5 to exit\n";
    while (cin >> instruction && instruction != 5) {
        switch (instruction) {
            case 1:
                head = createAndAddTask(head);
                break;
            case 2:
                displayTasks(head);
                break;
            case 3:
                cout << "Enter the ID of the task: " << endl;
                cin >> ID;
                searchTasks(head, ID);
                break;
            case 4:
                cout << "Enter the ID of the task you want to delete: " << endl;
                cin >> ID;
                head = deleteTask(head, ID);
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
        cout << "\nType 1 to add a task\n"
             << "2 to display tasks\n"
             << "3 to search for a task\n"
             << "4 to delete a task\n"
             << "5 to exit\n";
    }
    return 0;
}

