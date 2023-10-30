#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    stack<int> s;
    int unmatchedOpening = 0;
    for (int i = 0; i < pattern.size(); i++) {
        if (pattern[i] == '(') {
            s.push(i);
        } else if (pattern[i] == ')') {
            if (!s.empty()) {
                s.pop();
            } else {
                unmatchedOpening++;
            }
        }
    }
    int minimumClosing = s.size();
    return minimumClosing + unmatchedOpening;
}