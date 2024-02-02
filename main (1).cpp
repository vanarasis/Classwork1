#include<iostream>
// inilizing input output statments 
using namespace std;
int main ()
{    // creating a string with a variable cars
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0]= "tata";
    // to print all value we use for loop
    for (int i=0;i<5;i++)
    cout<<i<<"="<<cars[i]<<"\n";
    cout<< cars[0];
    // return 0
    return 0;
}
