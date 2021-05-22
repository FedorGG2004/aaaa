#include <iostream>

using namespace std;

int fun(int n, int &maxcount, int max){
    if(max==n)
        maxcount++;
    if(n>max){
        maxcount=1;
        max=n;
    }
    if(n!=0){
        cin>>n;
        fun(n, maxcount, max);
    }
    else
        return maxcount;

}

int main()
{
    int n;
    int maxcount=0;
    cin>>n;
    int max=n;
    cout<<fun(n, maxcount, max);

    return 0;
}

