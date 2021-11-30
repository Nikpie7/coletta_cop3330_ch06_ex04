/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nikolai Coletta
 */

#include "std_lib_facilities.h"

class Name_value {
    public:
        String myString;
        int myValue;

        Name_value(String s, int v) {
            myString = s;
            myValue = v;
        }

};

int main() {
    String name;
    int value;
    vector<Name_value> myList;

    while(true) {
        cout << "Please type a name and score, separated by a space (Type NoName 0 to terminate):" << endl;
        cin >> name >> value;

        if(name == "NoName" && value == 0)
            break;

        for(int i = 0; i < myList.size(); i++)
            if (myList[i].myString == name) {
                cout << "Error: invalid input.";
                return -1;
            }

        Name_value temp(name, value);
        myList.push_back(temp);
    }

    cout << "Printing all names and scores:" << endl;
    for(int i = 0; i < myList.size(); i++)
        cout << myList[i].myString << " " << myList[i].myValue << endl;

    return 0;
}
