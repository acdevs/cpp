#include <iostream>
#include <string>
#include <cmath>

class Polygon{
    private:
        int numSides;
        int sideLength;
    public:
        Polygon(int n, int l){
            numSides = n;
            sideLength = l;
        }
        int getPerimeter(){
            return numSides * sideLength;
        }
        int getArea(){
            return (sideLength * sideLength * numSides) / (4 * tan(3.14159 / numSides));
        }
        void print(){
            std::cout << "Polygon with " << numSides << " sides and side length " << sideLength << std::endl;
        }
};

int main(){
    // method 1
    Polygon *p1 = new Polygon(3, 5);
    p1->print();
    std::cout << "Perimeter: " << p1->getPerimeter() << std::endl;
    std::cout << "Area: " << p1->getArea() << std::endl;
    // method 2
    Polygon *p2 = new Polygon(4, 5);
    (*p2).print();
    std::cout << "Perimeter: " << (*p2).getPerimeter() << std::endl;
    std::cout << "Area: " << (*p2).getArea() << std::endl;
    // method 3
    Polygon obj3(5, 5);
    Polygon *p3 = &obj3;
    p3->print();
    std::cout << "Perimeter: " << p3->getPerimeter() << std::endl;
    std::cout << "Area: " << p3->getArea() << std::endl;
    return 0;
}
