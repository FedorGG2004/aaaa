#include <iostream>

using namespace std;

void fun(int n){
    if(n>=10)
        fun(n/10);
    int ost = n%10;
    cout<<ost<<" ";
}

int main()
{
    int n;
    cin>>n;
    fun(n);

    return 0;
}

