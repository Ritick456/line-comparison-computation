#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    cout << "Welcome to Line comparison computation program on master branch" << endl;
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;


    cout << "Enter the co-ordinates : " << endl;

    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;

    int lengthofline1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    int lengthofline2 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));

    cout << "The length of line1 is " << " " << lengthofline1 << endl;
    cout << "The length of line2 is " << " " << lengthofline2 << endl;

    if(lengthofline1 == lengthofline2){
        cout << "The lines are equal" << endl;
    }
    else{
        cout << "The lines are not equal" << endl;
    }
    
    return 0;
}