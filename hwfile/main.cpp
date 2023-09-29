#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include "Lion.h"
#include "Fish.h"
#include <windows.h> // Для Sleep

int main() {
    setlocale(LC_ALL, "ru");
    Dog myDog;
    myDog.SetName("Барон");
    myDog.SetAge(3);
    myDog.SetWeight(7.5);

    Cat myCat;
    myCat.SetName("Василиса");
    myCat.SetAge(2);
    myCat.SetWeight(4.0);

    Parrot myParrot;
    myParrot.SetName("Кеша");
    myParrot.SetAge(5);
    myParrot.SetWeight(0.3);

    Lion myLion;
    myLion.SetName("Симба");
    myLion.SetAge(4);
    myLion.SetWeight(150.0);

    Fish myFish;
    myFish.SetName("Немо");
    myFish.SetAge(1);
    myFish.SetWeight(0.05);

    myDog.About();
    myCat.About();
    myParrot.About();
    myLion.About();
    myFish.About();

    while (myDog.IsAlive() && myCat.IsAlive() && myParrot.IsAlive() && myLion.IsAlive() && myFish.IsAlive() &&
        myDog.GetSatiety() > 0 && myCat.GetHunger() < 100 && myParrot.GetHunger() < 100 && myLion.GetHunger() < 100 && myFish.GetHunger() < 100) {
        myDog.SleepDog();
        Sleep(2000); // Задержка 2 секунды
        myDog.Walk();
        Sleep(3000); // Задержка 3 секунды
        myDog.Play();
        Sleep(2000); // Задержка 2 секунды
        myDog.Eat();
        Sleep(1500); // Задержка 1.5 секунды

        myCat.SleepCat();
        Sleep(2000); // Задержка 2 секунды
        myCat.Hunt();
        Sleep(3000); // Задержка 3 секунды
        myCat.Eat();
        Sleep(1500); // Задержка 1.5 секунды

        myParrot.SleepParrot();
        Sleep(2000); // Задержка 2 секунды
        myParrot.Talk();
        Sleep(3000); // Задержка 3 секунды
        myParrot.Eat();
        Sleep(1500); // Задержка 1.5 секунды

        myLion.SleepLion();
        Sleep(2000); // Задержка 2 секунды
        myLion.Roar();
        Sleep(3000); // Задержка 3 секунды
        myLion.Eat();
        Sleep(1500); // Задержка 1.5 секунды

        myFish.SleepFish();
        Sleep(2000); // Задержка 2 секунды
        myFish.Swim();
        Sleep(3000); // Задержка 3 секунды
        myFish.Eat();
        Sleep(1500); // Задержка 1.5 секунды

        myDog.About();
        myCat.About();
        myParrot.About();
        myLion.About();
        myFish.About();
    }

    if (!myDog.IsAlive()) {
        cout << myDog.GetName() << " умер от голода." << endl;
    }
    else {
        cout << myDog.GetName() << " больше не хочет есть и ушел спать." << endl;
    }

    if (!myCat.IsAlive()) {
        cout << myCat.GetName() << " умерла от голода." << endl;
    }
    else {
        cout << myCat.GetName() << " больше не хочет есть и ушла спать." << endl;
    }

    if (!myParrot.IsAlive()) {
        cout << myParrot.GetName() << " умер от голода." << endl;
    }
    else {
        cout << myParrot.GetName() << " больше не хочет есть и ушел спать." << endl;
    }

    if (!myLion.IsAlive()) {
        cout << myLion.GetName() << " умер от голода." << endl;
    }
    else {
        cout << myLion.GetName() << " больше не хочет есть и ушел спать." << endl;
    }

    if (!myFish.IsAlive()) {
        cout << myFish.GetName() << " умерла от голода." << endl;
    }
    else {
        cout << myFish.GetName() << " больше не хочет есть и ушла спать." << endl;
    }

    return 0;
}