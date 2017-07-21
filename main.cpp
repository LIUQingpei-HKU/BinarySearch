#include <iostream>

using namespace std;

template<typename T>
int binarySearch(T arr[], int n, T target){


    //find target at arr[l...r]
    int l = 0;
    int r = n-1;
    while(l<=r){
        //int mid = (l+r)/2;
        int mid = l+(r-l)/2;
        if(arr[mid]==target)
            return mid;
        if(target<arr[mid])
            r = mid-1;
        else
            l = mid+1;
    }
    return -1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}