
//revese the number using while loop its like palinmdrom



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, rev=0;
// cout<<"Enter the number"; 
//     cin>>n; 
    
// while(n!=0)
// {
//     int digit=n%10;
//     rev=rev*10+digit;
//     n/=10;
// }
// cout<<rev;
// return 0;
// }







//using for loop 

#include<iostream>
using namespace std;
int main()
{
    int n, rev=0;
    cout<<"Enter the interger";
    cin>>n;
    for(; n != 0;n/=10)
    {
      int digit=n%10;
      rev=rev*10+digit;

    }
    cout<<"Reversed Number " <<rev<<endl;
    return 0;
}



// same question but here i going to find how many integer in this


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the integer";
//     cin>>n;
//     int count=0;
//     while(n!=0)
//     {
//         int digit= n %10;
//         count++;
//         n /= 10 ;

//     }
//     cout<< count <<"digits are in the number" << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     // Prompt the user to enter an integer
//     cout << "Enter the integer: ";
//     cin >> n;

//     // Initialize a counter to keep track of digits
//     int count = 0;

//     // While the number is not zero (still has digits)
//     while (n != 0) {
//         // Extract the last digit using modulo operator
//         int digit = n % 10;

//         // Increment the digit count
//         count++;

//         // Remove the last digit from the number for the next iteration
//         n /= 10;
//     }

//     // Print the count of digits
//     cout << count << " digits are in the number" << endl;

//     return 0;
// }







// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number :- ";
//     cin >> n;
//     int count = 0 ;
//     while(n != 0)
//     {
//         int digit = n % 10;
//         count ++;
//         n /= 10;
//     }
//     cout << count << "Digit in This Number :- "<<endl;
//     return 0;
// }