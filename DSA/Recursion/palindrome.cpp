#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char str[], int s, int e){
    if(s > e)
        return true;

    if(str[s] == str[e])
        isPalindrome(str, s + 1, e - 1);
    else
        return false;
}

int main(){
    char str[] = "tacocat";
    int len = strlen(str);
    
    if(isPalindrome(str, 0, len - 1))
        cout << str << " is palindrome!" << endl;
    else
        cout << str << ", not a palindrome!" << endl;
}