#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num;
    char answer;
    long long sum = 0;

    do
    {
        cout << "Please input one or many numbers: ";
        while (cin >> num) {
            sum += num;
            
            if (cin.peek() == '\n') {
                break;
            }
        }
        cout << "Cumulative sum of your input numbers is: "
             << sum << ".\n";

        cout << "Do you want to continue inputting numbers? (Y/N) ";
    } while (cin >> answer && tolower(answer) == 'y');
    
    cout << "Thank you! See you next time!\n";

    return 0;
}