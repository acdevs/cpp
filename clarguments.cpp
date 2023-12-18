#include<iostream>
using namespace std;

int main(int argc, char* argv[]){

    cout<<argc<<endl;

    for(int i=1; i<argc; i++){
        cout<<argv[i]<<endl;
    }

    /* Output : path/> ./a.exe Hello World 
       * first argument is always the path of the executable file
         * argc = 3
         * argv[0] = ./a.exe
         * argv[1] = Hello
         * argv[2] = World
    
    */
}