#include <iostream>
#include<algorithm>
using namespace std;

void maximums(int arr[], int n){
    sort(arr,arr+n);
    cout<<"maximum element is"<<arr[n-1]<<"and min is"<<arr[0];
}
int main() {
    int arr[7]={5,3,1,4,6,7,1};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    maximums(arr, n);

    return 0;
}
