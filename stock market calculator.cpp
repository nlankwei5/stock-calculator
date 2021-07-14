#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    float p = 0;
    float r = .01;

    cout << "Enter your amount \n"<<endl;
    cin >> p;
    cout<<" \n"<<endl;
    cout << "Here's your gains in stock market :" << endl;
    cout<<" \n"<<endl;

    for (int day=1; day<=30; day++){
        a = p * pow(1+r, day);
        cout << day << "-------" << a <<endl;
    }


}
