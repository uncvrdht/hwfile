#ifndef PARROT_H
#define PARROT_H

#include <iostream>
#include <string>

using namespace std;

class Parrot {
private:
    string name;
    int age;
    float weight;
    int hunger; // Уровень голода (от 0 до 100)
    bool isAlive; // Жив ли попугай
    bool isTalking; // Говорит ли попугай

public:
    // Главный конструктор
    Parrot(bool parrotIsAlive = true, const string& parrotName = "Unnamed", int parrotAge = 1, float parrotWeight = 3.0, int parrotHunger = 50);

    // Конструктор копирования
    Parrot(const Parrot& other);

    // Конструктор для инициализации только именем
    Parrot(const string& parrotName);

    // Конструктор для инициализации только возрастом
    Parrot(int parrotAge);

    // Деструктор
    ~Parrot();

    void SetName(const string& parrotName);
    string GetName() const;

    void SetAge(int parrotAge);
    int GetAge() const;

    void SetWeight(float parrotWeight);
    float GetWeight() const;

    void SetHunger(int parrotHunger);
    int GetHunger() const;

    void SetIsTalking(bool talking);
    bool IsTalking() const;

    bool IsAlive() const;

    void About();

    void SleepParrot();
    void Talk();
    void Eat();
};

#endif // PARROT_H