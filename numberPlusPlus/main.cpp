#include <iostream>
#include <random>
using namespace std;
#define LOW (-100)
#define HIGH (100)
int SMART_NUMBER=100;
int stupid_number=SMART_NUMBER-SMART_NUMBER;
int getIncremented(int, int);
void logicLevel(int);

int main() {
    cout <<endl<<endl<< "Stupid way.... "<<endl;
    cout << "-----------------------------------+"<< endl;
    cout << "stupid_number was:    "<<stupid_number<<"...         |"<< endl;
    stupid_number++;
    logicLevel(LOW);
    cout <<"|"<<endl;
    cout << "now stupid_number is: "<<stupid_number<<"...         |"<< endl;
    cout << "-----------------------------------+"<< endl<<endl;

    cout << "SMART WAY!!!! "<< endl;
    cout << "---------------------------------+"<< endl;
    cout << "MY SMART_NUMBER WAS:   "<<SMART_NUMBER<<"!!     |"<< endl;
    SMART_NUMBER = getIncremented(1, 1);
    logicLevel(HIGH);
    cout <<"            |"<<endl;
    cout << "MY SMART_NUMBER IS:    "<<SMART_NUMBER <<"!!!!   |"<<endl;
    cout << "---------------------------------+"<< endl;
    cout <<endl<< "STAY SMART! >:D"<<endl<<endl<<endl;
    return 0;
}

void logicLevel(int LEVEL){
    if (LEVEL == 100){
        cout << "INSERTING SMART LOGIC";
    }else{
        cout << "inserting goofy ahh stupid logic...";
    }
}

int getIncremented(int min, int max) {
    random_device RandomYes;
    mt19937 numberGoPLUSPLUS(RandomYes());
    uniform_int_distribution<int> thisIsWayToDoIt(min, max);
    return SMART_NUMBER + thisIsWayToDoIt(numberGoPLUSPLUS);
}
