#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    // creation...
    unordered_map<string, int> m;

    // insertion...
    pair<string, int> pair1 = make_pair("bst", 2);
    m.insert(pair1);
    pair<string, int> pair2("map", 3);
    m.insert(pair2);

    m["heap"] = 2;

    //searching...
    cout << m["bst"] << endl;
    cout << m.at("map") << endl;

    // cout << m.at("stack") << endl; // throws an error
    cout << m["stack"] << endl; // creates a new key-value pair

    // check if a key is present using count.
    if(m.count("stack") == 0)
        cout << "stack is not present" << endl;
    else
        cout << "stack is present" << endl;

    // deletion...
    m.erase("heap");

    // iteration...
    // 1
    for(auto i : m)
        cout << i.first << " : " << i.second << endl;
    cout << endl;
    //2
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " : " << it->second << endl;
        it++;
    }
    cout << endl;


    return 0;
}