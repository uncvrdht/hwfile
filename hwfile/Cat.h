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
    // Главный конструктор
    Cat(bool catIsAlive = true, const string& catName = "Unnamed", int catAge = 1, float catWeight = 3.0, int catHunger = 50);

    // Конструктор копирования
    Cat(const Cat& other);

    // Конструктор для инициализации только именем
    Cat(const string& catName);

    // Конструктор для инициализации только возрастом
    Cat(int catAge);

    // Деструктор
    ~Cat();

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