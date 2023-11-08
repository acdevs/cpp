#include <iostream>
using namespace std;
class Fruit
{
protected:
    int numFruits;

public:
    Fruit() : numFruits(0) {}
    void setFruits(int num)
    {
        numFruits = num;
    }
};
class Apples : public Fruit
{
public:
    void displayApples()
    {
        cout << "Number of apples in the basket: " << numFruits << endl;
    }
};
class Mangoes : public Fruit
{
public:
    void displayMangoes()
    {
        cout << "Number of mangoes in the basket: " << numFruits << endl;
    }
};
int main()
{
    Apples appleBasket;
    Mangoes mangoBasket;
    int numApples, numMangoes;
    cout << "Enter the number of apples in the basket: ";
    cin >> numApples;
    appleBasket.setFruits(numApples);
    cout << "Enter the number of mangoes in the basket: ";
    cin >> numMangoes;
    mangoBasket.setFruits(numMangoes);
    // Display the number of apples and mangoes
    appleBasket.displayApples();
    mangoBasket.displayMangoes();
    // Calculate the total number of fruits
    int totalFruits = numApples + numMangoes;
    cout << "Total number of fruits in the basket: " << totalFruits << endl;
    return 0;
}