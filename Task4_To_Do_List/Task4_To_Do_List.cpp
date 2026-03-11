#include <iostream>
#include <vector>
using namespace std;

vector<string> tasks;
vector<bool> completed;

// Function to add task
void addTask()
{
    string task;
    cin.ignore();
    cout << "Enter task: ";
    getline(cin, task);

    tasks.push_back(task);
    completed.push_back(false);

    cout << "Task added successfully.\n";
}

// Function to view tasks
void viewTasks()
{
    if(tasks.size() == 0)
    {
        cout << "No tasks available.\n";
        return;
    }

    cout << "\nYour Tasks:\n";

    for(int i = 0; i < tasks.size(); i++)
    {
        cout << i + 1 << ". " << tasks[i];

        if(completed[i])
            cout << " [Completed]";
        else
            cout << " [Pending]";

        cout << endl;
    }
}
// Function to mark task completed
void markCompleted()
{
    int num;

    viewTasks();

    cout << "Enter task number to mark as completed: ";
    cin >> num;

    if(num > 0 && num <= tasks.size())
    {
        completed[num - 1] = true;
        cout << "Task marked as completed.\n";
    }
    else
    {
        cout << "Invalid task number.\n";
    }
}
// Function to delete task
void deleteTask()
{
    int num;

    viewTasks();

    cout << "Enter task number to delete: ";
    cin >> num;

    if(num > 0 && num <= tasks.size())
    {
        tasks.erase(tasks.begin() + num - 1);
        completed.erase(completed.begin() + num - 1);

        cout << "Task deleted successfully.\n";
    }
    else
    {
        cout << "Invalid task number.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n------ TO DO LIST MANAGER ------\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark as Completed\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)   
        {
            case 1:
                addTask();
                break;

            case 2:
                viewTasks();
                break;

            case 3:
                markCompleted();
                break;

            case 4:
                deleteTask();
                break;

            case 5:
                cout << "Thanks for using the To-Do List Manager.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while(choice != 5);
  
   return 0;
}
