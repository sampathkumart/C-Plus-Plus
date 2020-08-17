#include <iostream>

using namespace std;

int main()
{
    int num1 = 5;
    int num2 = 6;
    cout << boolalpha;
    cout <<"enter two integers:";
    cin >> num1 >> num2;
    
    
    cout << num1 << "<" << num2 <<":" <<(num1 < num2) << endl;
    cout << num2 << ">" << num1 <<":" <<(num2 > num1) << endl;
	return 0;
}
