#include "Fish.h"

// ������� �����������
Fish::Fish(bool fishIsAlive, const string& fishName, int fishAge, float fishWeight, int fishHunger) {
    SetName(fishName);
    SetAge(fishAge);
    SetWeight(fishWeight);
    SetHunger(fishHunger);
    isAlive = fishIsAlive;
}

// ����������� �����������
Fish::Fish(const Fish& other) {
    // �������� �������� ����� �� ������� �������
    name = other.name;
    age = other.age;
    weight = other.weight;
    hunger = other.hunger;
    isAlive = other.isAlive;
}

// ����������� ��� ������������� ������ ������
Fish::Fish(const string& fishName) {
    SetName(fishName);
}

// ����������� ��� ������������� ������ ���������
Fish::Fish(int fishAge) {
    SetAge(fishAge);
}

// ����������
Fish::~Fish() {
    // �������������� �������� ��� �������� �������, ���� ����������
}

void Fish::SetName(const string& fishName) {
    this->name = fishName;
}

string Fish::GetName() const {
    return this->name;
}

void Fish::SetAge(int fishAge) {
    this->age = fishAge;
}

int Fish::GetAge() const {
    return this->age;
}

void Fish::SetWeight(float fishWeight) {
    this->weight = fishWeight;
}

float Fish::GetWeight() const {
    return this->weight;
}

void Fish::SetHunger(int fishHunger) {
    if (fishHunger < 0) {
        this->hunger = 0;
    }
    else if (fishHunger > 100) {
        this->hunger = 100;
    }
    else {
        this->hunger = fishHunger;
    }
}

int Fish::GetHunger() const {
    return this->hunger;
}

void Fish::SetIsSwimming(bool swimming) {
    this->isSwimming = swimming;
}

bool Fish::IsSwimming() const {
    return this->isSwimming;
}

bool Fish::IsAlive() const {
    return this->isAlive;
}

void Fish::About() {
    cout << "���: " << this->name << endl;
    cout << "�������: " << this->age << " ���(�)" << endl;
    cout << "���: " << this->weight << " ��" << endl;
    cout << "������� ������: " << this->hunger << "%" << endl;
    cout << "�������: " << (this->isSwimming ? "��" : "���") << endl;
    cout << "���������: " << (this->isAlive ? "����" : "������") << endl;
}

void Fish::SleepFish() {
    if (!this->isAlive) {
        cout << this->name << " ������, ������ �����." << endl;
        return;
    }
    cout << this->name << " ����..." << endl;
    this->hunger += 5;
    if (this->hunger > 100) {
        this->hunger = 100;
    }
    // ������ ��������, ��������� �� ����
}

void Fish::Swim() {
    if (!this->isAlive) {
        cout << this->name << " ������, �� ����� �������." << endl;
        return;
    }
    if (this->hunger > 70) {
        cout << this->name << " ������� ������� ��� ��������." << endl;
        return;
    }
    cout << this->name << " ������� � ���������..." << endl;
    this->hunger += 10;
    // ������ ��������, ��������� � ���������
}

void Fish::Eat() {
    if (!this->isAlive) {
        cout << this->name << " ������, ������ �������." << endl;
        return;
    }
    if (this->hunger < 20) {
        cout << this->name << " ������� ���� ��� ���." << endl;
        return;
    }
    cout << this->name << " ��� ���� ��� �����..." << endl;
    this->hunger -= 30;
    if (this->hunger < 0) {
        this->hunger = 0;
    }
    // ������ ��������, ��������� � ������� ����
}