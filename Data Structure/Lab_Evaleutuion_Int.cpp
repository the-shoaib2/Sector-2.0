#include <bits/stdc++.h>

using namespace std;

struct Task {
    string name;
    int hour;
    Task* next;
};

Task* head = nullptr;

void AddTask() {
    Task* newTask = new Task;
    cout << "Task Name: ";
    cin.ignore(); // Clear the newline character
    getline(cin, newTask->name);
    cout << "Required Hour: ";
    cin >> newTask->hour;
    cout << "\"" << newTask->name << "\" task added." << endl;

    newTask->next = head;
    head = newTask;
}

void RemoveTask(const string& taskName) {
    Task* current = head;
    Task* prev = nullptr;

    while (current != nullptr) {
        if (current->name == taskName) {
            cout << "\"" << current->name << "\" task removed." << endl;
            if (prev != nullptr) {
                prev->next = current->next;
            } else {
                head = current->next;
            }
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
    cout << "Task with name \"" << taskName << "\" not found." << endl;
}

void DisplayTasks() {
    cout << "Pending tasks:" << endl;
    Task* current = head;
    int total = 0;

    while (current != nullptr) {
        cout << current->name << " - " << current->hour << " hr" << endl;
        total += current->hour;
        current = current->next;
    }

    cout << "Total required time: " << total << " hr" << endl;
}

int main() {
    while (true) {
        cout << "Daily Task Planner:" << endl;
        cout << "1. Add a task" << endl;
        cout << "2. Remove a task" << endl;
        cout << "3. Display tasks" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4) {
            break;
        } else if (choice == 1) {
            AddTask();
        } else if (choice == 2) {
            string taskName;
            cout << "Task Name: ";
            cin.ignore(); // Clear the newline character
            getline(cin, taskName);
            RemoveTask(taskName);
        } else {
            DisplayTasks();
        }
    }

    Task* current = head;
    while (current != nullptr) {
        Task* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}





// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Task {
//     char name[100];
//     int hour;
//     struct Task* next;
// };

// struct Task* head = NULL;

// void AddTask() {
//     struct Task* newTask = (struct Task*)malloc(sizeof(struct Task));
//     printf("Task Name: ");
//     getchar(); // Clear the newline character
//     fgets(newTask->name, sizeof(newTask->name), stdin);
//     strtok(newTask->name, "\n"); // Remove the trailing newline
//     printf("Required Hour: ");
//     scanf("%d", &newTask->hour);
//     printf("\"%s\" task added.\n", newTask->name);

//     newTask->next = head;
//     head = newTask;
// }

// void RemoveTask(const char* taskName) {
//     struct Task* current = head;
//     struct Task* prev = NULL;

//     while (current != NULL) {
//         if (strcmp(current->name, taskName) == 0) {
//             printf("\"%s\" task removed.\n", current->name);
//             if (prev != NULL) {
//                 prev->next = current->next;
//             } else {
//                 head = current->next;
//             }
//             free(current);
//             return;
//         }
//         prev = current;
//         current = current->next;
//     }
//     printf("Task with name \"%s\" not found.\n", taskName);
// }

// void DisplayTasks() {
//     printf("Pending tasks:\n");
//     struct Task* current = head;
//     int total = 0;

//     while (current != NULL) {
//         printf("%s - %d hr\n", current->name, current->hour);
//         total += current->hour;
//         current = current->next;
//     }

//     printf("Total required time: %d hr\n", total);
// }

// int main() {
//     while (1) {
//         printf("Daily Task Planner:\n");
//         printf("1. Add a task\n");
//         printf("2. Remove a task\n");
//         printf("3. Display tasks\n");
//         printf("4. Exit\n");

//         int choice;
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         if (choice == 4) {
//             break;
//         } else if (choice == 1) {
//             AddTask();
//         } else if (choice == 2) {
//             char taskName[100];
//             printf("Task Name: ");
//             getchar(); // Clear the newline character
//             fgets(taskName, sizeof(taskName), stdin);
//             strtok(taskName, "\n"); // Remove the trailing newline
//             RemoveTask(taskName);
//         } else {
//             DisplayTasks();
//         }
//     }

//     struct Task* current = head;
//     while (current != NULL) {
//         struct Task* temp = current;
//         current = current->next;
//         free(temp);
//     }

//     return 0;
// }
