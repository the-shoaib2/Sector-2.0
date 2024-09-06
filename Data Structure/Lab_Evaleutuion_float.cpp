#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Task {
    char name[100];
    float hour; // Changed "int" to "float"
    struct Task* next;
};

struct Task* head = NULL;

void AddTask() {
    struct Task* newTask = (struct Task*)malloc(sizeof(struct Task));
    printf("Task Name: ");
    getchar(); // Clear the newline character
    fgets(newTask->name, sizeof(newTask->name), stdin);
    strtok(newTask->name, "\n"); // Remove the trailing newline
    printf("Required Hours: "); // Updated message
    scanf("%f", &newTask->hour); // Changed format specifier to "%f"
    printf("\"%s\" task added.\n", newTask->name);

    newTask->next = head;
    head = newTask;
}

void RemoveTask(const char* taskName) {
    struct Task* current = head;
    struct Task* prev = NULL;

    while (current != NULL) {
        if (strcmp(current->name, taskName) == 0) {
            printf("\"%s\" task removed.\n", current->name);
            if (prev != NULL) {
                prev->next = current->next;
            } else {
                head = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("Task with name \"%s\" not found.\n", taskName);
}

void DisplayTasks() {
    printf("Pending tasks:\n");
    struct Task* current = head;
    float total = 0.0; // Changed total to float

    while (current != NULL) {
        printf("%s - %.2f hr\n", current->name, current->hour); // Displaying "hour" as a float
        total += current->hour;
        current = current->next;
    }

    printf("Total required time: %.2f hr\n", total); // Displaying "total" as a float
}

int main() {
    while (1) {
        printf("Daily Task Planner:\n");
        printf("1. Add a task\n");
        printf("2. Remove a task\n");
        printf("3. Display tasks\n");
        printf("4. Exit\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            break;
        } else if (choice == 1) {
            AddTask();
        } else if (choice == 2) {
            char taskName[100];
            printf("Task Name: ");
            getchar(); // Clear the newline character
            fgets(taskName, sizeof(taskName), stdin);
            strtok(taskName, "\n"); // Remove the trailing newline
            RemoveTask(taskName);
        } else {
            DisplayTasks();
        }
    }

    struct Task* current = head;
    while (current != NULL) {
        struct Task* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
