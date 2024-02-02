#include<iostream>
using namespace std;
int main ()
{
    
    
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0]= "tata";
    for (int i=0;i<5;i++)
    cout<<i<<"="<<cars[i]<<"\n";
    cout<< cars[0];
    
    return 0;
}
