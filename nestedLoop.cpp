#include <iostream>
using namespace std;

int main() {
    int digit1 = 0;
    int digit2 = 0;
    int digit3 = 0;

    int range = 2;
    
    while (digit1 <= range) {
        while (digit2 <= range) {
            while (digit3 <= range) {
                cout << digit1 << " " << digit2 << " " << digit3 << endl;
                digit3 = digit3 + 1;
            }
            digit3= 0;
            digit2 = digit2 + 1;
        }
        digit2 = 0;
        digit1 = digit1 + 1;
    }
    return 0;
}