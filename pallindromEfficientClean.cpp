#include <iostream>
#include <string.h>
using namespace std;

bool pallindromeCheck(string s){
        int i = 0, j = s.length() - 1;
        while(i < j){
                if(s[i] != s[j])
                        return false;
                i++;
                j--;
        }
        return true;
}
int main() {
        string s;
        cout << "Enter the string: " << endl;
        cin >> s;
        //pallindromeCheck(s);
        if(pallindromeCheck(s))
                cout << "pallindrome = Yesss!" << endl;
        else
                cout << "pallindrome = NO!" << endl;
        return 0;
}
