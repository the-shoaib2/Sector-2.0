//Round Robin Scheduling

#include <bits/stdc++.h>
using namespace std;

struct process {
    int pid;
    int bt;
    int at;
};

void findAvgTimeRR(process proc[], int n, int quantum) {
    vector<int> rt(n);
    for (int i = 0; i < n; i++)
        rt[i] = proc[i].bt;

    vector<int> wt(n, 0), tat(n, 0);

    int t = 0; // current time
    while (true) {
        bool done = true;
        for (int i = 0; i < n; i++) {
            if (rt[i] > 0) {
                done = false;
                if (proc[i].at <= t) {
                    if (rt[i] > quantum) {
                        t += quantum;
                        rt[i] -= quantum;
                    } else {
                        t += rt[i];
                        wt[i] = t - proc[i].bt - proc[i].at;
                        rt[i] = 0;
                    }
                } else {
                    // if process hasn't arrived yet
                    t++;
                }
            }
        }
        if (done)
            break;
    }

    for (int i = 0; i < n; i++) {
        tat[i] = proc[i].bt + wt[i];
    }

    cout << "PID\tBT\tAT\tWT\tTAT\n";
    int total_wt = 0, total_tat = 0;
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        cout << proc[i].pid << "\t" 
             << proc[i].bt << "\t" 
             << proc[i].at << "\t" 
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
        cout << "Enter BT, AT, PID for process " << i + 1 << ": ";
        cin >> proc[i].bt >> proc[i].at >> proc[i].pid;
    }
    int quantum;
    cout << "Enter time quantum: ";
    cin >> quantum;

    findAvgTimeRR(proc, n, quantum);

    return 0;
}

/*
input:
5
5 0 1
3 1 2
8 2 3
6 3 4
4 4 5
output:
PID	BT	AT	WT	TAT
1	5	0	0	5
2	3	1	4	7
3	8	2    9	17
4	6	3	12	18
5	4	4	7	11
Average waiting time = 6.6
Average turn around time = 11.6
*/