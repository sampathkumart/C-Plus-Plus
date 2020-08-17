#include <iostream>

using namespace std;
int main()
{
    bool equal_result = true;
    bool not_equal = false;
    
   int num1 = 9;
   int num2 = 8;
   
   cout << boolalpha;
    
    cout << "two numbers:";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal = (num1 != num2);
    cout << "equal:" << equal_result << endl;
    cout << "not equal:" << not_equal << endl; 
    
	return 0;
}
