#include <iostream>
using namespace std;


int main()
{
    const double usdPerEuro {1.19};
    
    cout << "Welcome to the Euro to Dollar Conversion Program" << endl;
    
    cout << "Please Enter the number of Euros here: " << endl;
    
    double euros {0.0};
    double dollars {0.0};
    
    cin >> euros;
    
    dollars = euros * usdPerEuro;
    
    cout << euros << " Euro(s) is equivalent to " << dollars << " dollars " << endl;
    
    
    
    
    
    return 0;
}
