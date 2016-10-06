//
//  main.cpp
//  35. Search Insert Position
//
//  Created by chenyufeng on 10/6/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (target < nums[0])
        {
            return 0;
        }

        if (target == nums[i])
        {
            return i;
        }
        else
        {
            if (target > nums[i] && target < nums[i + 1])
            {
                return i + 1;
            }
        }
    }

    return (int)nums.size();
}

int main(int argc, const char * argv[])
{
    int arr[] = {1,3,5,6};
    vector<int>vv(arr,arr+sizeof(arr)/sizeof(int));

    int result = searchInsert(vv,60);
    cout << result;



    return 0;
}
