//Write a programme to print the following pattern//

//Pattern//

* * * * * 
* * * *
* * *
* *
*




#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        
    }
    return 0;
}
