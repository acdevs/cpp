#include <iostream>
#include <string.h>
using namespace std;

class Hero{

    // Constructor present by default are: 
    // 1. Default Constructor
    // 2. Copy Constructor
    // 3. Assignment Operator
    // 4. Destructor
    // If you define any of the above, the default ones are not created

    int health;

    public:
    int level;
    char *name;

    void setLevel(int level){
        this->level = level;
    }

    void setHealth(int health){
        this->health = health;
    }

    int getLevel(){
        return this->level;
    }

    int getHealth(){
        return this->health;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    char* getName(){
        return this->name;
    }

    ~Hero(){
        cout << "Destructor called" << endl;
    }
};

int main(){

    float total = 100;
    // float *ptr = &total; // this is static memory allocation
    // float *ptr = new float; // this is dynamic memory allocation
    float &sum = total; // this is reference variable
    ++sum;
    float sum2 = total; // this is reference variable
    
    ++sum2;

    cout << total << endl;
    cout << sum << endl;
    cout << total << endl;
    cout << sum2 << endl;
    cout << total << endl;

    Hero hero1;
    Hero *hero2 = new Hero;

    /* NOTE : 
    Destructor is called automatically for static objects, but
    for dynamic object you need to use "delete" keyword !!*/

    delete hero2;

    return 0;

    /*  
    Hero hero1;
    char name[8] = "Batman";
    hero1.setName(name);
    hero1.setLevel(10);
    hero1.setHealth(100);

    Hero hero2(hero1);
    // hero1.name[0] = 'C';

    cout << "hero1 : " << hero1.name << endl;
    cout << "-------------------" << endl;
    cout <<  "hero2 : " << hero2.name << endl; 
    */

    /* 
    Hero *hero1 = new Hero; // or Hero *hero = new Hero();
    char name[] = "Batman";
    hero1->setName(name);
    hero1->setLevel(10);
    hero1->setHealth(100);
    
    Hero *hero2 = new Hero(*hero1);

    hero2->name[0] = 'C';

    cout << "hero1 : " << hero1->getName() << endl;
    // cout << hero1->getLevel() << endl;
    // cout << hero1->getHealth() << endl;

    cout << "-------------------" << endl;

    cout <<  "hero2 : " << hero2->getName() << endl;
    // cout << hero2->getLevel() << endl;
    // cout << hero2->getHealth() << endl; 
    */
}