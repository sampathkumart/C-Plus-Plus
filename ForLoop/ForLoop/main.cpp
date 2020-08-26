#include <iostream>

using namespace std;

int main()
{
    for ( int p =3 ;p < 7 ; p++)
        cout << p << endl;
     
        cout << "------------------" <<endl;
        
    for ( int p =3 ;p < 7 ; p+=3)
        cout << p << endl;
         
        cout << "------------------" <<endl;
    
    for ( int o = 6 ; o > 0 ; o--)
        cout << o << endl;
        
        cout << "------------------" <<endl;
        
    for ( int  m = 0 ; m < 200 ; m+=5)
        if(m % 20 == 0)
        cout << m <<endl;
        
         cout << "------------------" <<endl;
        
    for ( int k=2, l=2 ; k< 10 ;++k, ++l)
        cout << k << " * " << l << " = " <<(k*l)<<endl;

	return 0;
}
