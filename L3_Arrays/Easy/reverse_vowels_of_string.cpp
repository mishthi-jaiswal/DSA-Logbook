#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' ||
        c == 'o' || c == 'u' || c == 'A' ||
        c == 'E' || c == 'I' || c == 'O' ||
        c == 'U') {
        return true;
    }
    return false;
}

string reverseVowels(string s) {
    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
        if (!isVowel(s[i])) {
            i++;
            continue;
        }

        if (!isVowel(s[j])) {
            j--;
            continue;
        }

        swap(s[i], s[j]);
        i++;
        j--;
    }

    return s;
}

int main() {
    //LEETCODE 345
    string s;

    cout << "Enter a string: ";
    cin >> s;

    string result = reverseVowels(s);

    cout << "String after reversing vowels: " << result << endl;

    return 0;
}