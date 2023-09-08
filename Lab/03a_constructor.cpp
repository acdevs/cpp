#include <iostream>

class Car{
    private:
        int speed;
        int gear;
    public:
        Car(); // default constructor
        Car(int s, int g); // parameterized constructor
        Car(const Car &obj); // copy constructor
        void setSpeed(int s);
        int getSpeed();
        void setGear(int g);
        int getGear();
        void print();
        ~Car();
};

Car::Car(){
    speed = 0;
    gear = 1;
}
Car::Car(int s, int g){
    speed = s;
    gear = g;
}
Car::Car(const Car &obj){
    speed = obj.speed;
    gear = obj.gear;
}
Car::~Car(){
    std::cout << "Car object destroyed" << std::endl;
}
void Car::print(){
    std::cout << "Car with speed: " << speed << " and gear: " << gear << std::endl;
}

int main(){
    Car Audi;
    Audi.print();
    Car BMW(250, 5);
    BMW.print();
    Car Mercedes(BMW);
    Mercedes.print();
    return 0;
}