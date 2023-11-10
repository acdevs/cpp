#include <iostream>
#include <string>
using namespace std;

int count_char(char* str){
    int count = 0;
    while(*str){
        count++;
        str++;
    }
    return count;
}

void copystr(char* dest, const char* src){
    while(*src){
        *dest++ = *src++;
    }
    *dest = '\0';
}

int main(){
    // char *str= "Hello"; // warning: conversion from string literal to 'char *' is deprecated
    char str[] = "Hello";
    char* str3 = str; // str3 is a pointer to the first character of str
    cout << count_char(str3) << endl;
    cout << str << endl;

    if('\0'){
        cout << "Hello" << endl;
    }

    char str1[10];
    copystr(str1, str); 
    // str1 = str; // error: array type 'char [10]' is not assignable
    cout << str1 << endl;

    string name;
    // cin.ignore();
    getline(cin, name);
    cout << name << endl;
}