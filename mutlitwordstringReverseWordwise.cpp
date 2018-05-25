#include <iostream>
#include <string.h>
using namespace std;

void reverseWordWise(char s[], int i, int j){
        while(i < j) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
        }
}
void entireStringReverse(char s[]){
        int i = 0, j = strlen(s) - 1;
        while(i < j){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
        }
        cout << endl << s << endl;

        i = 0, j = 0;
        for(j = 0; s[j] != '\0'; j++){
                if(s[j] == ' '){
                        reverseWordWise(s, i, j-1);
                        i = j + 1;
                        j = i;
                }
        }
        reverseWordWise(s, i, j-1);

        cout << endl << s << endl;
}

int main(){
        char s[1000];
        cout << "Enter the string: " << endl;
        cin.getline(s, 1000);
        entireStringReverse(s);
}
