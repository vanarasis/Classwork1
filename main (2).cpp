
#include <iostream>
// inilizing input output stream
using namespace std;
int main()
{   // set of all integers numbers
   int mynumbers[5] = {10, 20, 30, 40, 50};
   for (int i : mynumbers)
   {
       // print value via index
       cout << i << "\n";
   }
    // return 0 
    return 0;
}
