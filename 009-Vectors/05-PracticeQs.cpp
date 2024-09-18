#include<iostream>
#include<vector>
using namespace std;

int linerSearch(vector <int> &nums, int valueToSearch) {
    int index;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == valueToSearch) {
            cout << "Value " << nums[i] << "@ --> " << i << endl;
            index = i;
            break;
        }
    }

    return index;
}

void reverseVector(vector <int> &nums) {
    
    int start = 0;
    int end = nums.size();

    for (int i = start;  i < end / 2 ; i++) {
        if (start != end) {
            swap(nums[start], nums[end-1]);
            start++;
            end--;
        }
    }

}

int main() {
    vector <int> nums = {1,2,3,4,5,6};
    int valToSearch = 3;

    // cout << linerSearch(nums, valToSearch) << endl;

    reverseVector(nums);

    for (int val : nums) {
        cout << val << " ";
    }
    // for (int val : ) {
    //     cout << val << " "; 
    // }
    cout << endl;
}