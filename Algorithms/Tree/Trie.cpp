#include <bits/stdc++.h>
using namespace std;

// Define the Trie node structure
class TrieNode {
public:
    vector<TrieNode*> children;
    bool isEndOfWord;

    TrieNode() : isEndOfWord(false) {
        children = vector<TrieNode*>(26, nullptr);
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // Insert a word into the Trie
    // Time Complexity: O(M), where M is the length of the word
    void insert(string word) {
        TrieNode* current = root;
        for (char c : word) {
            int index = c - 'a';
            if (current->children[index] == nullptr) {
                current->children[index] = new TrieNode();
            }
            current = current->children[index];
        }
        current->isEndOfWord = true;
    }

    // Search for a word in the Trie
    // Time Complexity: O(M), where M is the length of the word
    bool search(string word) {
        TrieNode* current = root;
        for (char c : word) {
            int index = c - 'a';
            if (current->children[index] == nullptr) {
                return false;
            }
            current = current->children[index];
        }
        return current != nullptr && current->isEndOfWord;
    }

    // Check if any word in the Trie starts with the given prefix
    // Time Complexity: O(P), where P is the length of the prefix
    bool startsWith(string prefix) {
        TrieNode* current = root;
        for (char c : prefix) {
            int index = c - 'a';
            if (current->children[index] == nullptr) {
                return false;
            }
            current = current->children[index];
        }
        return current != nullptr;
    }
};

int main() {
    // Create a Trie
    Trie trie;

    // Insert some words into the Trie
    trie.insert("apple");
    trie.insert("banana");
    trie.insert("orange");

    // Search for words in the Trie
    cout << "Search Results:" << endl;
    cout << "apple: " << (trie.search("apple") ? "Found" : "Not Found") << endl;
    cout << "banana: " << (trie.search("banana") ? "Found" : "Not Found") << endl;
    cout << "orange: " << (trie.search("orange") ? "Found" : "Not Found") << endl;
    cout << "grape: " << (trie.search("grape") ? "Found" : "Not Found") << endl;

    // Check if any word in the Trie starts with a given prefix
    cout << "Prefix Search Results:" << endl;
    cout << "app: " << (trie.startsWith("app") ? "Found" : "Not Found") << endl;
    cout << "ban: " << (trie.startsWith("ban") ? "Found" : "Not Found") << endl;
    cout << "ora: " << (trie.startsWith("ora") ? "Found" : "Not Found") << endl;
    cout << "gr: " << (trie.startsWith("gr") ? "Found" : "Not Found") << endl;

    return 0;
}



// Search Results:
// apple: Found
// banana: Found
// orange: Found
// grape: Not Found
// Prefix Search Results:
// app: Found
// ban: Found
// ora: Found
// gr: Not Found