#include <iostream>
#include <stack>

using namespace std;

void nextGreaterElement(int nums1[], int nums1Size, int nums2[], int nums2Size, int result[]) {
    int nextGreater[nums2Size]; 
    stack<int> s;

    
    for (int i = nums2Size - 1; i >= 0; --i) {
        while (!s.empty() && s.top() <= nums2[i]) {
            s.pop();  
        }
        nextGreater[i] = s.empty() ? -1 : s.top(); 
        s.push(nums2[i]);
    }

    for (int i = 0; i < nums1Size; ++i) {
        for (int j = 0; j < nums2Size; ++j) {
            if (nums2[j] == nums1[i]) {
                result[i] = nextGreater[j];  
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {4, 1, 2};
    int arr2[] = {1, 3, 4, 2};
    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
    int result[arr1Size];

    nextGreaterElement(arr1, arr1Size, arr2, arr2Size, result);

    
    for (int i = 0; i < arr1Size; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
