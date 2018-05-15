Imp lines
10 char s1[100], yaha char hi lena hoga array ka warna mein strlen function ispe use nahi kar paaunga.

#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main() {
        char s1[100];
        cout << "Enter the string\n";
        cin >> s1;

        int len = strlen(s1);

        int i = 0, j = len-1;
        while(i <= j){
                if(s1[i++] != s1[j--]){
                        cout << "Not Pallindrome\n";
                        return 0;
                }
        }
        cout << "YES!!! Pallindrome\n";
        return 0;
}
