#include <iostream>
using namespace std;
 
int main()
{
    int a=0;
    cout << "Wpisz ilosc trojkatow: ";
    cin >> a;
    int len=((a*2)-1);
    for(int i(0); i<a; i++)
    {
        for(int j(0); j<a; j++)
        {
            for(int k(0); k<=len; k++)
            {
                if(k==a-i||k==a||k==a+i)
                {
                    cout << '*';
                    while(k<a+i)
                    {
                       cout << '*';
                       k++;
                    }
                }
                else
                    cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
