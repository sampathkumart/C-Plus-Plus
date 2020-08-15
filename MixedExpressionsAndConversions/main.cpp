#include <iostream>

using namespace std;

int main()
{
 int total;
 int num1 = 4;
 int num2 = 2;
 int num3 = 4;
 const int count = 3;
 
 cout <<"Enter 3 numbers:" << endl;
 cin >> num1 >> num2 >> num3;
 
 total = num1 + num2 + num3;
 
 double average = 0.0;
 
 average = static_cast<double>(total)/count;
 
 cout << "3 numbers:" << num1 << "," <<num2 << "," <<num3 << endl;
 cout << "the numbers is:" << total <<endl;
 cout << "the average number is:" << average << endl;

cout << endl;
return 0;
   
}
