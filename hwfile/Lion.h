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
    int hunger; // ������� ������ (�� 0 �� 100)
    bool isAlive; // ��� �� ���
    bool isRoaring; // ����� �� ���

public:
    Lion();

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