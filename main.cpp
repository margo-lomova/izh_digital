#include <iostream>

using namespace std;

int main()
    {
        int x = 100; 
        for (int i = 1; i <= x; ++i) 
            {
                if ((i%15) == 0){
                    cout<<"FizzBuzz"<<endl;
                }
                else if ((i%5) == 0){
                    cout<<"Buzz"<<endl;
                }
                else if ((i%3) == 0){
                    cout<<"Fizz"<<endl;
                }
                else {
                    cout << i << endl;  
                }
            }
return 0;
}

