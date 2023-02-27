//#pragma comment(lib, "libname.lib")

#include <iostream>
#include <string>

using namespace std;

class Dog {
public:
    string razmer;
    int color;

public:
    Dog() { this->razmer = "Empty"; this->color = 10; }
    Dog(string razmer, int color) { this->razmer = razmer; this->color = color; }
    ~Dog() { }

    void setRazmer(string razmer) { this->razmer = razmer; }
    void setColor(int color) { this->color = color; }

    string getRazmer() { return razmer; }
    int getColor() { return color; }

    void DogWalk();
    void DogEat();
};

void Dog::DogWalk() {
    cout << " идёт";
}

void Dog::DogEat() {
    cout << " ест";
}

class HomeDog : public Dog {
public:
    string klichka;
    int number;

public:
    HomeDog() { this->klichka = "Empty"; this->color = 2; }
    HomeDog(int razmer, int color, string klichka, int number) { this->razmer = razmer; this->color = color; this->klichka = klichka; this->number = number; }
    void setNumber(int number) { this->number = number; }
    void setKlichka(string klichka) { this->klichka = klichka; }

    int getNumber() { return number; }
    string getKlichka() { return klichka; }
};


int main() {
    setlocale(LC_ALL, "ru");
    HomeDog hd1;
    hd1.setRazmer("Большой размер");
    hd1.setColor(12);
    hd1.setKlichka("Бобка");
    hd1.setNumber(89208);

    cout << hd1.getKlichka();
    hd1.DogEat();
    cout << "\n";
    cout << hd1.getKlichka();
    hd1.DogWalk();
    cout << "\n\nРазмеры Бобки:" << hd1.getRazmer() << "; ";
    cout << "\nЦвет Бобки: " << hd1.getColor() << "; ";
    cout << "\nНомер владельца " << hd1.getKlichka() << ": " << hd1.getNumber() << "; \n\n";
}