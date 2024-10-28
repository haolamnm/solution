#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    long long n;
    string s;
    char c;
    stringstream ss(s);

    do {
        getline(cin, s);
        ss.clear();
        ss.str(s);
    } while (!(ss >> n) || (ss >> c) || (n > INT_MAX) || (n < INT_MIN));

    return 0;
}