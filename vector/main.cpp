#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> score = {100, 109, 50};
    cout << "using array syntax:" << endl;
    cout << score[0] << endl;
    cout << score[1] << endl;
    
    cout << "\nusing vector syntex:" << endl;
    cout << score.at(0) << endl;
    
    cout << "\nvector size:" << endl;
    cout << "there are " << score.size() << " scores in the vector" << endl;
    
    cout << "\nEnter first test score:";
    cin  >> score.at(0);
    
    cout << "\nMy first test score is  " << score.at(0)<< endl;
    
    
	return 0;
}
