        while(i < j){
                char temp  = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
        }
}

void reverseEntireString(char s[1000]){
        int i = 0, j = strlen(s) - 1;
        while(i < j){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
        }
        int start = 0, end = 0;
        for(i = 0; s[i] != '\0'; i++){
                if(s[i] == ' '){
                        end = i - 1;
                        reverseWords(s, start, end);
                        start = i + 1;
                        end = i + 1;
                }
        }
        end = i - 1;
        reverseWords(s, start, end);
}
int main() {
        char s[1000];
        cout << "Enter the string: " << endl;
        cin.getline(s, 1000);
        reverseEntireString(s);
        cout << s << endl;
        return 0;
}
