#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
    unordered_map<char, int> m;
       for (int i = 0; i < str.length(); i++) {
        m[str[i]]++;
    }
    // iterating through the unordered map
    for (auto it : m) {
        // if the count of characters is greater than 1 then
        // duplicate found
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}
int main()
{
    string str = "test string";
    printDups(str);
    return 0;
}
