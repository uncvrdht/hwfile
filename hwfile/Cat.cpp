#include "Cat.h"
// ������� �����������
Cat::Cat(bool catIsAlive, const string& catName, int catAge, float catWeight, int catHunger) {
    SetName(catName);
    SetAge(catAge);
    SetWeight(catWeight);
    SetHunger(catHunger);
    isAlive = catIsAlive;
}

// ����������� �����������
Cat::Cat(const Cat& other) {
    // �������� �������� ����� �� ������� �������
    name = other.name;
    age = other.age;
    weight = other.weight;
    hunger = other.hunger;
    isAlive = other.isAlive;
}

// ����������� ��� ������������� ������ ������
Cat::Cat(const string& catName) {
    SetName(catName);
}

// ����������� ��� ������������� ������ ���������
Cat::Cat(int catAge) {
    SetAge(catAge);
}

// ����������
Cat::~Cat() {
    // �������������� �������� ��� �������� �������, ���� ����������
}

void Cat::SetName(const string& catName) {
    name = catName;
}

string Cat::GetName() const {
    return name;
}

void Cat::SetAge(int catAge) {
    age = catAge;
}

int Cat::GetAge() const {
    return age;
}

void Cat::SetWeight(float catWeight) {
    weight = catWeight;
}

float Cat::GetWeight() const {
    return weight;
}

void Cat::SetHunger(int catHunger) {
    if (catHunger < 0) {
        hunger = 0;
    }
    else if (catHunger > 100) {
        hunger = 100;
    }
    else {
        hunger = catHunger;
    }
}

int Cat::GetHunger() const {
    return hunger;
}

bool Cat::IsAlive() const {
    return isAlive;
}

void Cat::About() {
    cout << "���: " << name << endl;
    cout << "�������: " << age << " ���(�)" << endl;
    cout << "���: " << weight << " ��" << endl;
    cout << "������� ������: " << hunger << "%" << endl;
    cout << "���������: " << (isAlive ? "����" : "������") << endl;
    cout << endl;
}

void Cat::SleepCat() {
    if (!isAlive) {
        cout << name << " ������, ������ �����." << endl;
        return;
    }
    cout << name << " ����..." << endl;
    hunger += 5;
    if (hunger > 100) {
        hunger = 100;
    }
    // ������ ��������, ��������� �� ����
}

void Cat::Hunt() {
    if (!isAlive) {
        cout << name << " ������, ������ ���������." << endl;
        return;
    }
    if (hunger > 80) {
        cout << name << " ������� ���� ��� �����." << endl;
        return;
    }
    cout << name << " �������� �� �����..." << endl;
    hunger += 20;
    if (hunger > 100) {
        hunger = 100;
    }
    // ������ ��������, ��������� � ������
}

void Cat::Eat() {
    if (!isAlive) {
        cout << name << " ������, ������ �������." << endl;
        return;
    }
    if (hunger < 20) {
        cout << name << " ������� ���� ��� ���." << endl;
        return;
    }
    cout << name << " ������ ����..." << endl;
    hunger -= 30;
    if (hunger < 0) {
        hunger = 0;
    }
    // ������ ��������, ��������� � ������� ����
}