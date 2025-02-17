#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int calPoints(vector<string>& ops) {
    stack<int> scores;
    
    for (const string& op : ops) {
        if (op == "C") {
            if (!scores.empty()) scores.pop(); 
        } else if (op == "D") {
            if (!scores.empty()) scores.push(2 * scores.top());  
        } else if (op == "+") {
            if (scores.size() >= 2) {
                int top1 = scores.top(); scores.pop();
                int top2 = scores.top();
                scores.push(top1);  
                scores.push(top1 + top2);  
            }
        } else {
            scores.push(stoi(op));  
        }
    }
    
   
    int total = 0;
    while (!scores.empty()) {
        total += scores.top();
        scores.pop();
    }
    
    return total;
}

int main() {
    vector<string> ops = {"5", "2", "C", "D", "+"};
    cout << "Final Score: " << calPoints(ops) << endl;
    return 0;
}
