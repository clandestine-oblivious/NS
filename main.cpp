#include <iostream>
#include <string>
#include <cstdlib>
#include "Name.h"


using namespace std;

const string Problems[] = {"Name Scores", "Exit"};
const int NUM_PROBLEMS=1;
const int EXIT = NUM_PROBLEMS+1;

int main()

{
    bool done= false;
    int i=0;
    int ch=0;
    Name names;

        while(done==false){
        system("cls");

        for (i=0; i < (NUM_PROBLEMS+1); i++)
        {cout << (i+1) << " ." << Problems[i] << endl; }

        cout << "Choose Problem: ";
        cin >> ch;

        switch(ch) {
            case 1:
                names.Name_scores();
                break;
            case EXIT:
                done=true;
                break;
        }
        system ("PAUSE");
        }
};

