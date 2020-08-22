#include <iostream>

using namespace std;

int main()
{
    int score  = 0 ;
    cout <<"Enter runs:" << endl;
    cin >> score;
    char letter_grade = 'r'; 
    
    if (score > 0 && score < 50){
        if(score > 100)
            letter_grade='m';
        else if (score > 50)
            letter_grade='g';
        else if (score > 30)
            letter_grade = 't';
            else
                letter_grade='f';
            cout <<"your grade is:" << letter_grade << endl; 
    } else {
        cout << "sorry" << endl;
    }
    
	return 0;
}
