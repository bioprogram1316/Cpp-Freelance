#include <iostream>
#include <string>
using namespace std;

bool judgeCircle(string moves) {
    int xCoord=0, yCoord=0;
    bool isCircle=false;

    for(int i=0; i<moves.length(); i++){
        if(moves.at(i)=='R'){
            xCoord++;
        }
        else if(moves.at(i)=='L'){
            xCoord--;
        }
        else if(moves.at(i)=='U'){
            yCoord--;
        }
        else if(moves.at(i)=='D'){
            yCoord++;
        }
    }
    if(xCoord==0 && yCoord==0)
        isCircle=true;

    return isCircle;
}

int main() {
    string moves;

    cin >> moves;

    cout << judgeCircle(moves) << endl;

    return 0;
}
