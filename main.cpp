#include <iostream>

using namespace std;

int main()
{
    int w;
    cin>>w;
    if(w>=1&&w<=100)
    {
        if(w%2==0&&w!=2)
        {
            cout<<"YES\n";
        }
        else if(w==2)
        {
                cout<<"NO\n";
        }
        else

        {
            cout<<"NO\n";
        }
    }

    return 0;
}
