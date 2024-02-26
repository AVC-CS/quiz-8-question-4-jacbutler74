#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;

const int MAXNUM = 10;
const int MAXLEN = 100;

int splitline(string str, char delim, char arr[MAXNUM][MAXLEN]);

int splitline(string str, char delim, char arr[MAXNUM][MAXLEN]) {
    stringstream tstr;
    tstr << str;
    string s;
    int cnt = 0;

    for (int i = 0; i < MAXNUM; ++i) {
        if (getline(tstr, s, delim)) {
            strcpy(arr[i], s.c_str());
            ++cnt;
        }
        else {
            break;
        }
    }

    return cnt;
}