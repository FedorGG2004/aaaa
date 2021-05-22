#include <iostream>

using namespace std;

void fun(int n, int k, int &count){
    if(n!=0){
        cout<<k<<" ";
        count++;
        if(k==count){
            count = 0;
            fun(n-1, k+1, count);
        }
        else
            fun(n-1, k, count);
    }
    else return;

}

int main()
{
    int n;
    cin>>n;
    int k=1;
    int count=0;
    fun(n, k, count);

    return 0;
}
