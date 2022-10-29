#include <stdio.h> 
#include <iostream>
using namespace std;

int main ()
{ /* local variable definition */ 
    int i,j,n;
    cin>>n;

    for(i=2; i<n; i++)
    { 
        for(j=2; j <= (i/j); j++) 
            if(!(i%j))
                break; // if factor found, not prime 
        if(j > (i/j))
            printf("%d is prime\n", i); 
    }

    return 0; 
}