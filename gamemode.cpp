#include <iostream>

using namespace std;

enum GameMode{
    Easy = 15,
    Medium = Easy * 2,
    Hard = Easy * 5,
    Hard2 
};

int main(void){
    GameMode selection;
    char grade;
    cout << "Code:\n (a)Assignment\n (b)Extra";
    cin >> grade;
    if (grade == 'a'){
        GameMode selection = Medium;
    }
    else{
        char option;
        cout << "Choose Difficulty:\n (a)Easy\n (b)Medium\n (c)Hard\n";
        cin >> option;
        switch(option){
            case 'a':
            GameMode selection = Easy;
            case 'b':
            GameMode selection = Medium;
            case 'c':
            GameMode selection = Hard;
            case 'd':
            GameMode selection = Hard2;
        }
    }

    switch(selection){
        case Easy:
        cout << "You've selected: Easy" << endl;
        cout << "Enemies now have: " << Easy << "xp" << endl;
        break;
        case Medium:
        cout << "You've selected: Medium" << endl;
        cout << "Enemies now have: " << Medium << "xp" << endl;
        break;
        case Hard:
        cout << "You've selected: Hard" << endl;
        cout << "Enemies now have: " << Hard << "xp" << endl;
        break;
        case Hard2:
        cout << "So you've selected... death" << endl;
        cout << "Enemies now have Xp of: Yes "<< endl;
        break;
    }
}