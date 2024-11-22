#include <iostream>
using namespace std;
bool sort(int arr[], int length);
main()
{
    int length;
    cout << "Array Length  :";
    cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    bool result=sort(arr, length);
    if(result==1){
 cout<<"True";
    }
    if(result==0){
 cout<<"False";
    }
   
}
bool sort(int arr[], int length)
{
    int t = 0;
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    int k;

    for (k = 0; k < length; k++)
    {
        for (int i = 0; i < length-1; i++)
        {
            if ((arr[k] == arr[i]) &&(i!=k))
            {
                return false;
            }
            if ((arr[k] != arr[i]+ 1) && (k==i+1))
            {
                return false;
            }
        }
    }
    return true;
}