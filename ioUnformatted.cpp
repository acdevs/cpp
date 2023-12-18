#include<iostream>
using namespace std;

int main(){

    // cin.get() reads a single character from the keyboard.
    // char data;
    // cin.get(char) is used to read a single character from the keyboard.
    // cin.get(data);
    // cout.put(data);

    // -------------------------------------------------------------------

    // cin.getline() reads a line from the keyboard into a buffer.
    // char buffer[100];
    // cin.getline(buffer, 100);
    // cout<<buffer;

    // -------------------------------------------------------------------

    // cin.ignore() ignores the next character in the input sequence.
    char ch;
    cin.ignore(1);
    cin.get(ch); // abc -> bc
    cout<<ch;

    // -------------------------------------------------------------------

    // cin.peek() returns the next character in the input sequence, without extracting it.

}