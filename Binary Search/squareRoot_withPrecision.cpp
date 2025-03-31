#include <iostream>
using namespace std;

long long int binarySearch(int n)
{
   int s = 0, e = n;
   long long int ans = -1;

   while (s <= e)
   { // Fix: Use "s <= e" instead of "s < e"
      long long int m = s + (e - s) / 2;
      long long int square = m * m;

      if (square == n)
      {
         return m;
      }
      if (square < n)
      {
         ans = m;   // Store possible answer
         s = m + 1; // Move to the right half
      }
      else
      {
         e = m - 1; // Move to the left half
      }
   }
   return ans;
}

double morePrecision(int n, int precision, int tempAns)
{
   double factor = 1;
   double ans = tempAns;

   for (int i = 0; i < precision; i++)
   {
      factor = factor / 10;
      for (double j = ans; j*j < n; j = j + factor)
      {
         /* code */
         ans = j;
      }
      
   }
   return ans;
}
int main()
{
   int n;
   cout << "Enter the value:" << endl;
   cin >> n;

   int tempAns = binarySearch(n);
   cout << "Answer is:" << morePrecision(n, 3, tempAns);

   return 0;
}
