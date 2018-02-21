#include <iostream>

using namespace std;

int main() {
    std::string numerals = "XVII";
    int val = 0;
    int sum = 0;
    int prev = 0;
    for(char& c : numerals) {
        switch (c) {
            case 'I':
                val = 1;
                break;
            case 'V': 
                val = 5;
                break;
            case 'X':
                val = 10;
                break;
            case 'L':
                val = 50;
                break;
        }
        if (prev != 0) {
            if (prev > val) {
                sum += prev;
            } else if (prev == val) {
                sum +-= prev;
            } else {
                sum -= prev;
            }
        }
        prev = val;
    }
    sum += prev;
    cout << "Result: " << sum  << endl;
    return sum;
}
