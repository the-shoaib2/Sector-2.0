// Priority Scheduling (Preemptive)

#include <bits/stdc++.h>
using namespace std;

struct process {
    int pid;
    int bt;
    int at;
    int priority;
};

void findAvgTimePriorityP(process proc[], int n) {
    vector<int> rt(n);
    for (int i = 0; i < n; i++)
        rt[i] = proc[i].bt;

    vector<int> wt(n, 0), tat(n, 0);
    int complete = 0, t = 0;
    bool found = false;
    int highestPrio;
    int idx;

    while (complete < n) {
        highestPrio = INT_MAX;
        found = false;
        for (int i = 0; i < n; i++) {
            if (proc[i].at <= t && rt[i] > 0 && proc[i].priority < highestPrio) {
                highestPrio = proc[i].priority;
                idx = i;
                found = true;
            }
        }
        if (!found) {
            t++;
            continue;
        }

        rt[idx]--;
        t++;

        if (rt[idx] == 0) {
            complete++;
            int finish_time = t;
            wt[idx] = finish_time - proc[idx].bt - proc[idx].at;
            if (wt[idx] < 0) wt[idx] = 0;
            tat[idx] = finish_time - proc[idx].at;
        }
    }

    cout << "PID\tBT\tAT\tPrio\tWT\tTAT\n";
    int total_wt = 0, total_tat = 0;
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        cout << proc[i].pid << "\t" 
             << proc[i].bt << "\t" 
             << proc[i].at << "\t" 
             << proc[i].priority << "\t" 
             << wt[i] << "\t" 
             << tat[i] << "\n";
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

    findAvgTimePriorityP(proc, n);
    return 0;
}

/*
Input:
4
Enter number of processes: 4
Enter BT, AT, Priority, PID for process 1: 8 0 2 1
Enter BT, AT, Priority, PID for process 2: 4 1 1 2
Enter BT, AT, Priority, PID for process 3: 9 2 3 3
Enter BT, AT, Priority, PID for process 4: 5 3 4 4
Output:
PID	BT	AT	Prio	WT	TAT
1    8	0	2	    9	17
2	4	1	1	    1	5
3	9	2	3       16	25
4	5	3	4	    21  26
Average waiting time = 11.75
Average turn around time = 26.0
*/