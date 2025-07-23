#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

unordered_map<int, vector<int>> sequences;

void processCommand(const string& cmd) {
    if (cmd.substr(0, 3) == "new") {
        int id = stoi(cmd.substr(4));
        sequences[id] = vector<int>();
    }
    else if (cmd.substr(0, 3) == "add") {
        size_t space_pos = cmd.find(' ', 4);
        int id = stoi(cmd.substr(4, space_pos - 4));
        int num = stoi(cmd.substr(space_pos + 1));
        sequences[id].push_back(num);
    }
    else if (cmd.substr(0, 5) == "merge") {
        size_t space1 = cmd.find(' ', 6);
        size_t space2 = cmd.find(' ', space1 + 1);
        int id1 = stoi(cmd.substr(6, space1 - 6));
        int id2 = stoi(cmd.substr(space1 + 1, space2 - space1 - 1));

        if (id1 != id2) {
            sequences[id1].insert(sequences[id1].end(),
                sequences[id2].begin(),
                sequences[id2].end());
            sequences[id2].clear();
        }
    }
    else if (cmd.substr(0, 6) == "unique") {
        int id = stoi(cmd.substr(7));
        sort(sequences[id].begin(), sequences[id].end());
        auto last = unique(sequences[id].begin(), sequences[id].end());
        sequences[id].erase(last, sequences[id].end());
    }
    else if (cmd.substr(0, 3) == "out") {
        int id = stoi(cmd.substr(4));
        sort(sequences[id].begin(), sequences[id].end());
        for (int num : sequences[id]) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        string cmd;
        getline(cin, cmd);
        processCommand(cmd);
    }

    return 0;
}
