/* suying zheng
  CS 110A
  lab 3 parallelogram
*/

#include <iostream>
using namespace std;

int main()
{
    char a;   //character to make the parallelogram
    int side;

    cout << "This program will output a parallelogram.\n";

    cout <<" How long do you want each side to be? ";
    cin >> side;

    cout << "Please enter a character:  ";
    cin >> a;

    for(int line = 1; line <= side; line++)
    {

         for(int wideth = 1; wideth <= line; wideth ++) 
           cout << a;
  
         cout << endl;
    }
     
    for(int line = side - 1; line < side; line--)
    {
        for(int space = line; space < side; space++)
             cout <<  " ";
             
        for(int wideth = 0; wideth < line; wideth++)
             cout << a;
             
        cout << endl;
    if (line == 0)   
     break;
     
    }
     
    return 0;
}



// outcome

// [szheng32@hills ~]$ g++ lab3_tria.cpp
// [szheng32@hills ~]$ a.out
// This program will output a parallelogram.
//  How long do you want each side to be? 8
// Please enter a character:  *
// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
//  *******
//   ******
//    *****
//     ****
//      ***
//       **
//        *
        
// [szheng32@hills ~]$ g++ lab3_tria.cpp
// [szheng32@hills ~]$ a.out
// This program will output a parallelogram.
//  How long do you want each side to be? 5
// Please enter a character:  v
// v
// vv
// vvv
// vvvv
// vvvvv
//  vvvv
//   vvv
//    vv
//     v

