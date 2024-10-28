#include <iostream>

using namespace std;

int main() {
    // prompt for user input
    // math, physics and chemistry in [0, 10]
    float math, physics, chemistry;
    cout << "Enter your score in Math: ";
    cin >> math;
    cout << "Enter your score in Physics: ";
    cin >> physics;
    cout << "Enter your score in Chemistry: ";
    cin >> chemistry;

    // calculate the student total score
    float total = math + physics + chemistry; 
    if (total >= 15 && math >= 4 && physics >= 4 && chemistry >= 4) {
        cout << "Pass!";
        if ((int)(math * 100) == (int)(physics * 100) && 
            (int)(math * 100) == (int)(chemistry * 100)) {
            cout << "Studying all subjects equallly.";
        } else {
            cout << "Studying all subjects unequally."; 
        }
    } else {
        cout << "Fail!";
    }
    

    return 0;
}