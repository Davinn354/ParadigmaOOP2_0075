#include <iostream>
using namespace std;

class baseClass {
public :
    virtual void perkenalan() /*final*/ {
        cout << "Hallo saya Function dari base class";
    }

};
class derivedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya function ddari derived Class ";
    }
};
int main() {
    derivedClass a; // akses langsung pada class
    a.perkenalan();

    return 0;
}
