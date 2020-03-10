#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number of integers to be sorted: ";
    cin>>num;
    int arr[num];
    cout<<"Enter integer "<<num<<": "<<endl;
    for (int x = 0; x < num; x++) {
        cin>>arr[x];
    }
    for (int y = 0; y < num - 1; y++) {
        for (int z = y + 1; z < num; z++) {
            if (arr[y] > arr[z]) {
                int hold = arr[z];
                arr[z] = arr[y];
                arr[y] = hold;
            }
        }
    }
    cout<<"Sorted integer: ";
    for (int i = 0; i < num; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
