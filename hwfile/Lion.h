#ifndef LION_H
#define LION_H

#include <iostream>
#include <string>

using namespace std;

class Lion {
private:
    string name;
    int age;
    float weight;
    int hunger; // Уровень голода (от 0 до 100)
    bool isAlive; // Жив ли лев
    bool isRoaring; // Рычит ли лев

public:
    // Главный конструктор
    Lion(bool lionIsAlive = true, const string& lionName = "Unnamed", int lionAge = 1, float lionWeight = 3.0, int lionHunger = 50);

    // Конструктор копирования
    Lion(const Lion& other);

    // Конструктор для инициализации только именем
    Lion(const string& lionName);

    // Конструктор для инициализации только возрастом
    Lion(int lionAge);

    // Деструктор
    ~Lion();

    void SetName(const string& lionName);
    string GetName() const;

    void SetAge(int lionAge);
    int GetAge() const;

    void SetWeight(float lionWeight);
    float GetWeight() const;

    void SetHunger(int lionHunger);
    int GetHunger() const;

    void SetIsRoaring(bool roaring);
    bool IsRoaring() const;

    bool IsAlive() const;

    void About();

    void SleepLion();
    void Roar();
    void Eat();
};

#endif // LION_H