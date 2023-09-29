#include "Dog.h"

Dog::Dog() {
    name = "Unnamed";
    age = 1;
    weight = 5.0;
    satiety = 80;
    isAlive = true;
}

void Dog::SetName(const string& dogName) {
    name = dogName;
}

string Dog::GetName() const {
    return name;
}

void Dog::SetAge(int dogAge) {
    age = dogAge;
}

int Dog::GetAge() const {
    return age;
}

void Dog::SetWeight(float dogWeight) {
    weight = dogWeight;
}

float Dog::GetWeight() const {
    return weight;
}

void Dog::SetSatiety(int dogSatiety) {
    if (dogSatiety < 0) {
        satiety = 0;
    }
    else if (dogSatiety > 100) {
        satiety = 100;
    }
    else {
        satiety = dogSatiety;
    }
}

int Dog::GetSatiety() const {
    return satiety;
}

bool Dog::IsAlive() const {
    return isAlive;
}

void Dog::About() {
    cout << "���: " << name << endl;
    cout << "�������: " << age << " ���(�)" << endl;
    cout << "���: " << weight << " ��" << endl;
    cout << "������� �������: " << satiety << "%" << endl;
    cout << "���������: " << (isAlive ? "���" : "�����") << endl;
}

void Dog::SleepDog() {
    if (!isAlive) {
        cout << name << " �����, ������ �����." << endl;
        return;
    }
    cout << name << " ����..." << endl;
    satiety -= 5;
    if (satiety < 0) {
        satiety = 0;
    }
    // ������ ��������, ��������� �� ����
}

void Dog::Walk() {
    if (!isAlive) {
        cout << name << " �����, ������ ������." << endl;
        return;
    }
    if (satiety < 10) {
        cout << name << " ������� ������� ��� ��������." << endl;
        return;
    }
    cout << name << " ���� �� ��������..." << endl;
    satiety -= 8;
    weight -= 0.2;
    if (satiety < 0) {
        satiety = 0;
    }
    if (weight < 0) {
        weight = 0;
    }
    // ������ ��������, ��������� � ���������
}

void Dog::Play() {
    if (!isAlive) {
        cout << name << " �����, ������ ������." << endl;
        return;
    }
    if (satiety < 20) {
        cout << name << " ������� ������� ��� ����." << endl;
        return;
    }
    cout << name << " ������ � �����..." << endl;
    satiety -= 12;
    weight -= 0.3;
    if (satiety < 0) {
        satiety = 0;
    }
    if (weight < 0) {
        weight = 0;
    }
    // ������ ��������, ��������� � �����
}

void Dog::Eat() {
    if (!isAlive) {
        cout << name << " �����, ������ �������." << endl;
        return;
    }
    cout << name << " ������..." << endl;
    satiety += 25;
    weight += 0.2;
    if (satiety > 100) {
        satiety = 100;
    }
    if (weight < 0) {
        weight = 0;
    }
    // ������ ��������, ��������� � ������� ����
}