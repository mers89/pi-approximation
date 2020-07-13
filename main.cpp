/* Main function of the C++ program. */

#include <iostream>
#include "math.h"
using namespace std;

/* 
 * This is your main function - my hidden main() will execute this function
 * when you "Run", but execute the tests when you hit "Submit"
*/ 
int user_main() {
//declaring variable 
int it;
double res;
//asking user to input number of iterations they wish to pass 

cin >> it;
//calling function
res = approx(it);
//Print result that is rounded 5 decimal places

cout.precision(5);
cout << fixed;
cout<< "Pi is approximated to be " <<res;
 return 0;
}

//return values = 0



