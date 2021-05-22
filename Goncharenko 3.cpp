#include <iostream>

using namespace std;

int fun(int n, int max, int &max2){
    if(n>=max){
        max2=max;
        max=n;
    }
    if(n!=0){
        cin>>n;
        fun(n, max, max2);
    }
    else
        return max2;
}

int main()
{
    int n;
    cin>>n;
    int max=n;
    int max2=n;
    cout<<fun(n, max, max2);

    return 0;
}
