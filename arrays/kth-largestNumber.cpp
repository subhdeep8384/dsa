#include<vector>
#include<cstdlib>
using namespace std ;


class Solution {
    public : 
    int quickSelect(vector<int>& nums , int left , int right , int target ){
        int pivotIndex = left + rand() % (right -left + 1) ;
        int pivot = nums[pivotIndex] ;
        swap(nums[pivotIndex] , nums[right] ) ;
        int storeIndex = left ;

        for(int i = left ; i < right ; i++ ){
            if(nums[i] < pivot){
                swap(nums[i] , nums[storeIndex++] ) ;
            }
        }
    }
    int findKthLargest(vector<int>& nums , int k ){
        int target = nums.size() - k ; 
        return quickSelect(nums , 0 , nums.size() -1 , target ) ;
    }
};