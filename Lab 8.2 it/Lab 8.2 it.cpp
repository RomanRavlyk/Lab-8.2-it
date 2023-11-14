#include <iostream>
#include <string>
using namespace std;
bool isLetter(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

int findLongestWord(const string& s) {
    string longestWord;
    string currentWord;
    int sizew = 0;
    for (char ch : s) {
        if (isLetter(ch)) {
            currentWord += ch;
        }
        else {
            if (!currentWord.empty() && currentWord.length() > longestWord.length()) {
                longestWord = currentWord;
            }
            currentWord.clear();
        }
    }
    if (!currentWord.empty() && currentWord.length() > longestWord.length()) {
        longestWord = currentWord;
    }

    for (int i = 0; i < size(longestWord); i++) {
        sizew = i;
    }
    return sizew + 1;
}
int main()
{
 string str;
 cout << "Enter string:" << endl;
 getline(cin, str);
 cout << "Length of the longest word: " << findLongestWord(str) << endl;
 return 0;
}