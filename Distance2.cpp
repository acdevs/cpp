#include <iostream>

class Distance{
    protected:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0){
        }
        Distance(int ft, float in) : feet(ft), inches(in){
        }
        void getdist(){
            std::cout << "Enter feet: ";
            std::cin >> feet;
            std::cout << "Enter inches: ";
            std::cin >> inches;
        }
        void showdist(){
            std::cout << feet << "\'-" << inches << '\"';
        }
};

class DistSign : public Distance{
    private:
        char sign;
    public:
        DistSign() : Distance(){
            sign = '+';
        }
        DistSign(int ft, float in, char s) : Distance(ft, in){
            sign = s;
        }
        void getdist(){
            Distance::getdist();
            std::cout << "Enter sign (+ or -): ";
            std::cin >> sign;
        }
        void showdist(){
            std::cout << ((sign == '-') ? "(-" : "(");
            Distance::showdist();
            std::cout << ")";
        }
};