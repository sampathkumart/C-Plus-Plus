#include <iostream>

using namespace std;
int main(){
   
    char letters [] = {'r','d','e','f','u'};
    cout << "\nThe first letter is:" <<letters[0] << endl;
    cout << "\nThe second letter is:" <<letters[1] << endl;
    
    letters[1] = 'M';
    cout << "\nNow the second letter is:" << letters[1] << endl;
    
    
    int scores [3] = {156};
    cout << "\nfirst test score is:" << scores[0] << endl;
    cout << "\nsecond test score is:" << scores[1] << endl;
    cout << "\nthird test score is:" << scores[2] << endl;
    
    return 0;
    
}
