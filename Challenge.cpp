#include <iostream>
#include <climits>
using namespace std;








int main()
{
	 
    // Ask user to enter in number of cents 
    
    int cents {};
    int pennies {}, nickels{}, dimes{}, quarters{};
    int remainder {};
    
    cout << "Please enter the number of cents between 0 and 100" << endl;
    
    cin >> cents;
    
    
    // Divide by cent amounts, take the modulus for remainder and divide by seperate denominations.
    
    quarters = cents / 25;
    remainder = cents % 25;
    
    dimes = remainder / 10;
    remainder %= 10;
    
    nickels = remainder / 5;
    remainder %= 5;
    
    pennies = remainder;
    
    
    cout <<
    "\nQuarters: " << quarters << endl <<
    "Dimes: " << dimes << endl <<
    "Nickels: " << nickels << endl <<
    "Pennies: " << pennies << endl;
    
    
    
    
    
    
    
    
    return 0;
}
