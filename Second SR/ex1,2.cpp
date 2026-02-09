#include <iostream>
using namespace std;

class Tile {
public:
    virtual void activate() {
        cout << "Звичайна клітинка\n";
    }
    virtual ~Tile() {}
};

class BombTile : public Tile {
public:
    void activate() override {
        cout << "Бомба вибухає\n";
    }
};

class BonusTile : public Tile {
public:
    void activate() override {
        cout << "Бонус дає очки\n";
    }
};

// Функція з покажчиком на базовий клас
void process(Tile* t) {
    t->activate();
}

int main() {
    BombTile b;
    BonusTile bonus;

    process(&b);
    process(&bonus);
}
