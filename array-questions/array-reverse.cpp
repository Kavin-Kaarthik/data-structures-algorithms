#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int arr[], int n) {
    int i = 0;
    
    while(i<n/2) {
        swap(arr[i],arr[n-1-i]);
        i++;
      
    }
}

int main() {
    int arr[5] = {2,3,4,5,6};
    reverse(arr,5);

}
