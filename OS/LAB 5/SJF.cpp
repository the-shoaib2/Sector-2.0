#include <bits/stdc++.h>
using namespace std;

struct process {
    int pid;
    int bt;
    int at;
};

void findWaitingTimeSJF(process proc[], int n, vector<int> &wt) {
    // sort by arrival time first
    sort(proc, proc + n, [](process a, process b) {
        return a.at < b.at;
    });

    // keep track of when CPU is free next
    int time = 0;
    vector<bool> done(n, false);
    for (int count = 0; count < n; count++) {
        // find process with minimum burst time among the arrived ones
        int idx = -1;
        int min_bt = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (!done[i] && proc[i].at <= time && proc[i].bt < min_bt) {
                min_bt = proc[i].bt;
                idx = i;
            }
        }
        if (idx == -1) {
            // if no process has arrived yet
            time++;
            count--;
            continue;
        }
        // waiting time = current time - arrival
        wt[idx] = time - proc[idx].at;
        time += proc[idx].bt;
        done[idx] = true;
    }
}

void findTurnAroundTimeSJF(process proc[], int n, vector<int> &wt, vector<int> &tat) {
    for (int i = 0; i < n; i++) {
        tat[i] = proc[i].bt + wt[i];
    }
}

void findAvgTimeSJF(process proc[], int n) {
    vector<int> wt(n), tat(n);
    int total_wt = 0, total_tat = 0;

    findWaitingTimeSJF(proc, n, wt);
    findTurnAroundTimeSJF(proc, n, wt, tat);

    cout << "PID\tBT\tAT\tWT\tTAT\n";
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

    findAvgTimeSJF(proc, n);

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
3	8	2	7	15
4	6	3	15	21
5	4	4	7	11
Average waiting time = 6.6
Average turn around time = 11.8

*/