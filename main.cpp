#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   int result = 1;
   
   cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;
   /* Complete your code */
        for (int i = 0; i <= M; i++){
         cout << result << ", ";
         result *= N;
      }
  return(0);
}
