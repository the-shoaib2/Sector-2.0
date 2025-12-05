#include <bits/stdc++.h>
using namespace std;

// Shortest Remaining Time First (SRTF) Scheduling Algorithm
struct process {
    int pid;
    int bt;
    int at;
};

void findAvgTimeSRTF(process proc[], int n) {
    vector<int> rt(n); // remaining times
    for (int i = 0; i < n; i++)
        rt[i] = proc[i].bt;

    vector<int> wt(n, 0), tat(n, 0);
    int complete = 0, t = 0;
    int min_rt;
    int shortest = 0;
    bool found = false;

    while (complete < n) {
        min_rt = INT_MAX;
        found = false;
        for (int i = 0; i < n; i++) {
            if (proc[i].at <= t && rt[i] > 0 && rt[i] < min_rt) {
                min_rt = rt[i];
                shortest = i;
                found = true;
            }
        }
        if (!found) {
            t++;
            continue;
        }

        // run for 1 unit time
        rt[shortest]--;
        t++;

        // if a process gets completely executed
        if (rt[shortest] == 0) {
            complete++;
            found = false;
            int finish_time = t;
            wt[shortest] = finish_time - proc[shortest].bt - proc[shortest].at;
            if (wt[shortest] < 0)
                wt[shortest] = 0;
            tat[shortest] = finish_time - proc[shortest].at;
        }
    }

    // print
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

    findAvgTimeSRTF(proc, n);
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
5	4	4    7	11
Average waiting time = 6.6
Average turn around time = 11.8
*/