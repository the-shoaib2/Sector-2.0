#include <bits/stdc++.h>
using namespace std;

// First-Come, First-Served (FCFS) Scheduling Algorithm

struct process {
    int pid; // process id
    int bt;  // burst time
    int at;  // arrival time
};

// function to find waiting time for all processes
void findWaitingTime(process proc[], int n, vector<int> &wt)
{
    wt[0] = 0;
    for (int i = 1; i < n; i++)
        wt[i] = proc[i - 1].bt + wt[i - 1];
}

// function to calculate turn around time
void findTurnAroundTime(process proc[], int n, vector<int> &wt, vector<int> &tat)
{
    for (int i = 0; i < n; i++)
        tat[i] = proc[i].bt + wt[i];
}

// function to calculate average time
void findavgTime(process proc[], int n)
{
    vector<int> wt(n), tat(n);
    int total_wt = 0, total_tat = 0;

    findWaitingTime(proc, n, wt);
    findTurnAroundTime(proc, n, wt, tat);

    cout << "PID\tBT\tAT\tWT\tTAT\n";

    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        cout << proc[i].pid << "\t" << proc[i].bt << "\t" 
             << proc[i].at << "\t" << wt[i] << "\t" << tat[i] << endl;
    }

    cout << "\nAverage waiting time = " << (float)total_wt / n;
    cout << "\nAverage turn around time = " << (float)total_tat / n << endl;
}

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    process proc[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter Burst Time, Arrival Time, Process ID for process " << i + 1 << ": ";
        cin >> proc[i].bt >> proc[i].at >> proc[i].pid;
    }

    // Sort by arrival time (FIFO) queue
    sort(proc, proc + n, [](process a, process b) {
        return a.at < b.at;
    });

    findavgTime(proc, n);

    return 0;
}


/*
Input:
3
5 0 1
3 2 2
8 4 3
Output:
PID     BT      AT      WT      TAT
1       5       0       0       5
2       3       2       5       8
3       8       4       8       16

Average waiting time = 4.33333
Average turn around time = 9.66667
*/