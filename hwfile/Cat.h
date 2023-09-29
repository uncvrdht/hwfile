#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>

using namespace std;

class Cat {
private:
    string name;
    int age;
    float weight;
    int hunger; // Уровень голода (от 0 до 100)
    bool isAlive; // Жива ли кошка

public:
    Cat();
    Cat(const string& catName, int catAge, float catWeight, int catHunger, bool catIsAlive);

    void SetName(const string& catName);
    string GetName() const;

    void SetAge(int catAge);
    int GetAge() const;

    void SetWeight(float catWeight);
    float GetWeight() const;

    void SetHunger(int catHunger);
    int GetHunger() const;

    bool IsAlive() const;

    void About();

    void SleepCat();
    void Hunt();
    void Eat();
};

#endif // CAT_H