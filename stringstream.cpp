#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector<int> num;
    int a;
    char ch;
    while(ss>>a){ //(ss>>a) "a' madhe value takto....eg: string = (23,4,55) 1-while(23) ( "," gela ch madhe ) 2-while(4).. so on
        num.push_back(a);
        ss >> ch; // ">>" returns value from our string and "ch" is used as garbage var. to remove unwanted like ( ,./ )
    }
    return num;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
