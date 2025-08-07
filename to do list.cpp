#include <iostream.h>
#include <vector>
#include <string>

using namespace std;
void showmenu()  {
    cout << "To-Do List Menu:" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Remove Task" << endl;
    cout << "4. Exit" << endl;
    cout<< "Please select an option (1-4): " << endl;
}

int main() {
    vector<string> tasks;
    int choice;
    string task;
    do {
        showmenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task to add: ";
                cin.ignore(); // Clear the newline character from the input buffer
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task added." << endl;
                break;
            case 2:
                cout << "Current Tasks:" << endl;
                for (size_t i = 0; i < tasks.size(); ++i) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
                break;
            case 3:
                cout << "Enter task number to remove: ";
                int index;
                cin >> index;
                if (index > 0 && index <= tasks.size()) {
                    tasks.erase(tasks.begin() + index - 1);
                    cout << "Task removed." << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
}
