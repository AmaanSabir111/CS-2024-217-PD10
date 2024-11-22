#include <iostream>
using namespace std;
int rotate(string arr[], int length);
main()
{
    int length;
    cout << "Array Length  :";
    cin >> length;
    string arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
        if(arr[i]!="right"&&arr[i]!="left"){
            cout<<"Invalid Input";
        }
    }
    int result=rotate(arr,length);
    cout<<result;
}
int rotate(string arr[], int length)
{
    int m=0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == "right")
        {
            m += 90;
        }
        if (arr[i] == "left")
        {
            m -= 90;
        }
        
        
    }
    if(m<0){
            m=-m;
        }
    return m/360;
}