#include <iostream>
using namespace std;
int main()
{
  int input;

  cout << "Enter a number to print pattern\n";
  cin >> input;

  for (int j = 1; j <= input; j++) // Outer loop 
  {
    
  for (int k = 1; k <= input - j; k++) // Print spaces
    {
      cout << " ";
      }

  for (int i = 1; i <= (2 * j - 1); i++) // Print stars
    {
      cout << "*";
      }

   cout << endl; // Move to next line
    }

  return 0;   
}
