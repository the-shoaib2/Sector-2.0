// Priority Scheduling (Non-Preemptive)

#include <bits/stdc++.h>
using namespace std;

// Priority Scheduling Algorithm (Non-Preemptive)
struct process {
    int pid;
    int bt;
    int at;
    int priority;
};

void findWaitingTimePriorityNP(process proc[], int n, vector<int> &wt) {
    vector<bool> done(n, false);
    int time = 0;

    for (int c = 0; c < n; c++) {
        int idx = -1;
        int highestPrio = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (!done[i] && proc[i].at <= time && proc[i].priority < highestPrio) {
                highestPrio = proc[i].priority;
                idx = i;
            }
        }
        if (idx == -1) {
            time++;
            c--;
            continue;
        }
        wt[idx] = time - proc[idx].at;
        time += proc[idx].bt;
        done[idx] = true;
    }
}

void findTurnAroundTimePriorityNP(process proc[], int n, vector<int> &wt, vector<int> &tat) {
    for (int i = 0; i < n; i++)
        tat[i] = proc[i].bt + wt[i];
}

void findAvgTimePriorityNP(process proc[], int n) {
    vector<int> wt(n), tat(n);
    int total_wt = 0, total_tat = 0;

    findWaitingTimePriorityNP(proc, n, wt);
    findTurnAroundTimePriorityNP(proc, n, wt, tat);

    cout << "PID\tBT\tAT\tPrio\tWT\tTAT\n";
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        cout << proc[i].pid << "\t" 
             << proc[i].bt << "\t" 
             << proc[i].at << "\t" 
             << proc[i].priority << "\t" 
             << wt[i] << "\t" << tat[i] << "\n";
    }

    cout << "Average waiting time = " << (float)total_wt / n << "\n";
    cout << "Average turn around time = " << (float)total_tat / n << "\n";
}

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    process proc[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter BT, AT, Priority, PID for process " << i + 1 << ": ";
        cin >> proc[i].bt >> proc[i].at >> proc[i].priority >> proc[i].pid;
    }

    findAvgTimePriorityNP(proc, n);
    return 0;
}

/*
Inptut:
4
Enter number of processes: 4
Enter BT, AT, Priority, PID for process 1: 10 0 2 1
Enter BT, AT, Priority, PID for process 2: 1 1 1
Enter BT, AT, Priority, PID for process 3: 2 2 4 2
Enter BT, AT, Priority, PID for process 4: 1 3 3 3
Output:
PID	BT	AT	Prio	WT	TAT
1	10	0	2   	3	13
2	1	1	1	    0	1
3	2	2	4	    5	7
4	1	3	3	    6	7
Average waiting time = 3.5
Average turn around time = 7.0
*/