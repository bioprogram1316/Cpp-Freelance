#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

    string decToBinary(int n) {
        string binary;
        int placeHolder=n;

        while(placeHolder>0) {
            binary+=to_string(placeHolder%2);
            placeHolder/=2;
        }
        reverse(binary.begin(), binary.end());

        return binary;
    }

    int hammingDistance(int x, int y) {
		string xBinary, yBinary;
		int diffCount = 0;

		xBinary = decToBinary(x);
		yBinary = decToBinary(y);

		while (xBinary.length()>yBinary.length()) {
			yBinary.insert(0, 1, '0');
		}
		while (yBinary.length()>xBinary.length()) {
			xBinary.insert(0, 1, '0');
		}

		for (int i = 0; i<xBinary.length(); i++) {
			if (xBinary.at(i) != yBinary.at(i))
				diffCount++;
		}
		return diffCount;
    }

int main(){
    int x, y, difference;

    cin >> x >> y;

    difference=hammingDistance(x, y);

    cout << difference << endl;

    return 0;
}
