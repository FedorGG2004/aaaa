#include <iostream>
#include <cmath>

using namespace std;

bool f(int count){
     int k=2;
     bool flag=1;
     while(k<count){
         if(count%k==0){
             flag=0;
             return false;
         }
         k++;
  }
     if(flag==1)
         return true;
}

void fun(int n, int &count){
    if(count == n)
        return;
    if(n%count == 0 && f(count)==true)
        cout<<count<<" ";
    count++;
    fun(n, count);
}

int main()
{
    int n;
    cin>>n;
    int count=2;
    fun(n, count);

    return 0;
}

