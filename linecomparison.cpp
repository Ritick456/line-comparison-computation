#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    cout << "Welcome to Line comparison computation program on master branch" << endl;
    int x1, y1;
    int x2, y2;

    cin>>x1>>y1;
    cin>>x2>>y2;

    int length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << length << endl; 

    return 0;
}