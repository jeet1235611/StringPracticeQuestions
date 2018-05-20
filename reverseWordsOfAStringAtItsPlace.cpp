#include <iostream>
using namespace std;

void reverseWordsPlace(char s[100], int i , int j){
        int start = i, end = j;
        while(start < end){
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
        }

}
void reverseWords(char s[1000]){
        int i = 0, j = 0;
        while(s[j] != '\0'){
                if(s[j] == ' '){

                        reverseWordsPlace(s, i, j-1);
                        i = j + 1;
                        j = i;
                }
                j++;
        }
        reverseWordsPlace(s, i, j - 1);
        cout << s << endl;
}
int main() {
        char s[100];
        cout << "Enter the string: " << endl;
        cin.getline(s, 1000);
        reverseWords(s);
        return 0;
}
