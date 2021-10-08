#include <iostream>
using namespace std;
void decToBinary(int n)
{
    int binaryNum[32];
    int i=0;
    while (n>0)
    {
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
        cout<<binaryNum[j];
}
int main()
{
    int digits[4];
    char dot = '.';
    cout<<"Please enter ip address digits by digits : ";
    cin>>digits[0]>>digits[1]>>digits[2]>>digits[3];
    decToBinary(digits[0]);
    cout<<" ";
    decToBinary(digits[1]);
    cout<<" ";
    decToBinary(digits[2]);
    cout<<" ";
    decToBinary(digits[3]);
}

