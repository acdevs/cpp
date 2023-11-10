#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char str[], int s, int e){
    if(s > e)
        return;
    
    char temp = str[s];
    str[s] = str[e];
    str[e] = temp;

    reverseString(str, s + 1, e - 1);
}

int main(){
    char str[] = "hello world";
    int len = strlen(str);

    cout << "Before : " << str << endl;

    reverseString(str, 0, len - 1);

    cout << "After : " << str << endl;
}