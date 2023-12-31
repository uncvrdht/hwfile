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
    int hunger; // ������� ������ (�� 0 �� 100)
    bool isAlive; // ���� �� ����
    bool isSwimming; // ������� �� ����

public:
    // ������� �����������
    Fish(bool fishIsAlive = true, const string& fishName = "Unnamed", int fishAge = 1, float fishWeight = 3.0, int fishHunger = 50);

    // ����������� �����������
    Fish(const Fish& other);

    // ����������� ��� ������������� ������ ������
    Fish(const string& fishName);

    // ����������� ��� ������������� ������ ���������
    Fish(int fishAge);

    // ����������
    ~Fish();

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