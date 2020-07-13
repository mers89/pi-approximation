
#include <iostream>
#include "math.h"
using namespace std;

//declaring function
double approx(int it){
//declaring variables 
double z=4,x=4,y=3;
int i;
//iteration loop
for(i=1;i<it;i++){
if(i%2){
//Subtract from iteration calculation - even
z -= x/y;
y +=2;
}
else{
//Addition from iteration calculation - odd
z += x/y;
y +=2;
}
}

//Return value to Calling Function
return (z);
}