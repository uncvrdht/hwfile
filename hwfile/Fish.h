#ifndef FISH_H
#define FISH_H

#include <iostream>
#include <string>

using namespace std;

class Fish {
private:
    string name;
    int age;
    float weight;
    int hunger; // Уровень голода (от 0 до 100)
    bool isAlive; // Жива ли рыба
    bool isSwimming; // Плавает ли рыба

public:
    Fish();
    Fish(const string& fishName, int fishAge, float fishWeight, int fishHunger, bool fishIsAlive, bool fishIsSwimming);

    void SetName(const string& fishName);
    string GetName() const;

    void SetAge(int fishAge);
    int GetAge() const;

    void SetWeight(float fishWeight);
    float GetWeight() const;

    void SetHunger(int fishHunger);
    int GetHunger() const;

    void SetIsSwimming(bool swimming);
    bool IsSwimming() const;

    bool IsAlive() const;

    void About();

    void SleepFish();
    void Swim();
    void Eat();
};

#endif // FISH_H