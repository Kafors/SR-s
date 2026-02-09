#include <iostream>
using namespace std;

class Tile {
public:
    virtual void activate() {
        cout << "Звичайна клітинка активована\n";
    }
    virtual ~Tile() {}
};

class BombTile : public Tile {
public:
    void activate() override {
        cout << "БОМБА! Видаляє сусідні клітинки\n";
    }
};

int main() {
    Tile* t = new BombTile(); 

    t->activate();  

    delete t;
}
