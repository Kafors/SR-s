#include <iostream>
using namespace std;

class Tile {
public:
    virtual void activate() {
        cout << "Tile\n";
    }
    virtual ~Tile() {}
};

class BombTile : public Tile {
public:
    void activate() override {
        cout << "BombTile\n";
    }
};

class BonusTile : public Tile {
public:
    void activate() override {
        cout << "BonusTile\n";
    }
};

class GameBoard {
public:
    void interact(Tile& t) {  // передача посилання
        t.activate();         // виклик віртуальної функції
    }
};

int main() {
    GameBoard board;
    BombTile b;
    BonusTile bonus;

    board.interact(b);
    board.interact(bonus);
}
