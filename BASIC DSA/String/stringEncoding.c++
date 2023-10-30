#include <bits/stdc++.h> 

string encode(string &message)
{
     string encodedMessage = "";
    int count = 1;
    for (int i = 0; i < message.length(); i++) {
        if (i + 1 < message.length() && message[i] == message[i + 1]) {
            count++;
        } else {
            encodedMessage += message[i] + to_string(count);
            count = 1;
        }
    }
    return encodedMessage;
}