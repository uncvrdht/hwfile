#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

using namespace std;

class Dog {
private:
    string name;
    int age;
    float weight;
    int satiety; // Уровень сытости (от 0 до 100)
    bool isAlive; // Жива ли собака

public:
    Dog();

    void SetName(const string& dogName);
    string GetName() const;

    void SetAge(int dogAge);
    int GetAge() const;

    void SetWeight(float dogWeight);
    float GetWeight() const;

    void SetSatiety(int dogSatiety);
    int GetSatiety() const;

    bool IsAlive() const;

    void About();

    void SleepDog();
    void Walk();
    void Play();
    void Eat();
};

#endif // DOG_H