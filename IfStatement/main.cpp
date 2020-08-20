#include <iostream>
using namespace std;

int main()
{
	int num = 5;
    const int min = 10;
    const int max = 30;
    
    cout << "enter a number between " << min << " and " << max <<":";
    cin >> num;
    
    if (num > min)
        cout << num << " is greater than " << min << endl;
        
        int diff= num -min;
        cout << num << "is" << diff << "greater than "<< min << endl;
        
	return 0;
}
