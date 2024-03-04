int funcn(vector<int> &arr , int low , int high , int target){

    if(low>high){

        return -1;

    }

 

    int mid = (low+high)/2;

    if(arr[mid]==target){

        return mid;

    }

    else if(arr[mid]>target){

        return funcn(arr,low , mid-1 , target);

    }

    else{

        return funcn(arr,mid+1 , high , target);

    }

}

int search(vector<int> &nums, int target) {

    int low = 0 ;

    int size = nums.size();

    int high = size-1;

    return funcn(nums,low,high,target);

}
