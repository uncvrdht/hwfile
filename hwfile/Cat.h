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
    int hunger; // ������� ������ (�� 0 �� 100)
    bool isAlive; // ���� �� �����

public:
    // ������� �����������
    Cat(bool catIsAlive = true, const string& catName = "Unnamed", int catAge = 1, float catWeight = 3.0, int catHunger = 50);

    // ����������� �����������
    Cat(const Cat& other);

    // ����������� ��� ������������� ������ ������
    Cat(const string& catName);

    // ����������� ��� ������������� ������ ���������
    Cat(int catAge);

    // ����������
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