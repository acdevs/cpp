#include <iostream> 
#include <string> 
using namespace std; 

class Car{ 
    private:
        string carName;
        string model;
        float maxSpeed;
        bool isRunning = false;

    public:
        Car(const string &name, const string &mdl, double spd) : carName(name), model(mdl), maxSpeed(spd){
            isRunning = false;
        }
        void start(){
            isRunning = true;
            cout << "Car started.\n";
        }
        void stop(){
            isRunning = false;
            cout << "Car stopped.\n";
        }
        void showDetails(){
            cout << "Car Name: " << carName << "\n";
            cout << "Model: " << model << "\n";
            cout << "MaxSpeed: " << maxSpeed << " km/h\n";
        }
        void status(){
            cout << "Car Status: " << (isRunning ? "Running" : "Not Running") << "\n";
        }
};

int main(){
    string name = "Honda";
    string model = "Amaze";
    float maxSpeed = 200;
    Car myCar(name, model, maxSpeed);
    // Car myCar("Honda", "Amaze", 200);
    myCar.showDetails();
    myCar.status();
    myCar.start();
    myCar.status();
    myCar.stop();
    myCar.status();
    return 0;
}
