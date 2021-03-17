#include <iostream>
using namespace std;


int main()
{
	
    int total {};
    int num1 {}, num2 {}, num3 {};

    const int count {3};
    
    
    cout << "Enter three integers seperated by spaces : ";
    
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    
    // This has to be changed to calculate average for all double type answers:
    average = static_cast<double>(total) / count;
    // Only one of the two values has to be changed so that both will be a higher order data type
    // average = (double)total / count;    OLD STYLE DONT USE
    
    cout << "The three numbers were " << num1 << ", " << num2 << ", " << num3 << endl;
    
     cout << "The sum of the numbers is " << total << endl;
     
     cout << "The average of the numbers is " << average << endl;
     
    
    
    
    return 0;
}
