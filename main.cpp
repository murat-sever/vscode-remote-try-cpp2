#include <iostream>
#include <string>

using namespace std;

int fib(int N)
{
    if(N == 1)
        return 0;
    else if(N==2)
        return 1;
    else{
        int i=0;
        int j=1;
        int sum = 0;
        for(int ind = 2;ind<N;ind++)
        {
            sum = i+j;
            i=j;
            j=sum;
        }
        return sum;
    }

}

int fib_rec(int N)
{
    if(N == 1)
        return 0;
    else if(N==2)
        return 1;
    else{
        return fib_rec(N-2) + fib_rec(N-1);
    }
}

int main() {
    cout << "Hello Fib\n";
    cout << fib(5) << " " << fib_rec(5) << endl;
    cout << fib(15) << " " << fib_rec(15) << endl;
    
    return 0;
}