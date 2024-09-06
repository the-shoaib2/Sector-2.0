#include <bits/stdc++.h>
using namespace std;

int main() {
    string filename, content;
    ofstream file;

    cout << "Welcome to Simple Notepad!" << endl;
    cout << "Enter the filename: ";
    cin >> filename;

    file.open(filename);

    if (!file.is_open()) {
        cerr << "Error: Unable to create/open the file!" << endl;
        return 1;
    }

    cout << "Enter your text (press Ctrl + D or Ctrl + Z + Enter to save and exit):" << endl;

    // Read lines of text until user presses Ctrl + D (Unix) or Ctrl + Z + Enter (Windows)
    while (cin >> content) {
        file << content << endl;
    }

    cout << "Text saved successfully. Exiting Notepad." << endl;
    file.close();

    return 0;
}
