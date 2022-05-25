#include <iostream>
#include <string>
using namespace std;
class JURNAL {
    public:
        string name, decoration, publishing;
        int period;
    void show(void);
};
inline void JURNAL::show(void) {
    cout << "Ismi: " << name << endl;
    cout << "Davriylik: " << period << endl;
    cout << "Ko'rinishi: " << decoration << endl;
    cout << "Nashriyot: " << publishing << endl;
};
int main() {
    JURNAL myobj;
    myobj.name="Atom Odatlar";
    myobj.period=2018;
    myobj.decoration="Yumshoq muqova";
    myobj.publishing="Hilol nashr";
    cout << "Natija: " << endl;
    myobj.show();
    return 0;
}
