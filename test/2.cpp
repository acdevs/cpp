#include <iostream>
using namespace std;
struct vehicle{
private:
    string colour;
    int price;
    string max_speed;

public:
    void getvehicle()
    {
        cout << "Enter colour: ";
        cin >> colour;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter maximum speed: ";
        cin >> max_speed;
    }
    void showvehicle()
    {
        cout << "Colour is: " << colour << "\n";
        cout << "Price is: " << price << "\n";
        cout << "Maximum speed is: " << max_speed << "\n";
    }
};

int main(){
    vehicle car[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "For car " << (i + 1) << "\n";
        car[i].getvehicle();
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "For car " << (i + 1) << "\n";
        car[i].showvehicle();
    }
    return 0;
}