#include <iostream>

using namespace std;

int main()
{
    int n;

	cout << " enter n:";
	cin>>n;
    if(n % 3==0 ){
        cout<< " divided by "; cout<< 3 << endl;
    }
    else
    {
        cout<< " is not divided by "; cout<< 3 << endl;
    }


    return 0;
}
