#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string s) {
   
    string cleaned = "";
    for (char c : s) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }

    
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());

   
    return cleaned == reversed;
}

int main() {
    string s1 = "A man, a plan, a canal: Panama";
    if(isPalindrome(s1)) {
        cout<<"true";
        }
        else{
            cout<<"false";
        }
   
    return 0;
}
