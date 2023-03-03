#include "functions.hpp"

int romanToInt(string s) {
    
    int value = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        
        if (s[i] == 'M') {
            value += 1000;
        }
        if (s[i] == 'D') {
            value += 500;
        }
        if (s[i] == 'C') {
            if (s[i+1] == 'D') {
                value += 400;
                i++;
            }
            else if (s[i+1] == 'M') {
                value += 900;
                i++;
            }
            else {
                value += 100;
            }
        }
        if (s[i] == 'L') {
            value += 50;
        }
        if (s[i] == 'X') {
            if (s[i+1] == 'L') {
                value += 40;
                i++;
            }
            else if (s[i+1] == 'C') {
                value += 90;
                i++;
            }
            else {
                value += 10;
            }
        }
        if (s[i] == 'V') {
            value += 5;
        }
        if (s[i] == 'I') {
            if (s[i+1] == 'V') {
                value += 4;
                i++;
            }
            else if (s[i+1] == 'X') {
                value += 9;
                i++;
            }
            else {
                value ++;
            }
        }
        
    }

    return value;
}
