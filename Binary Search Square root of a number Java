public class Solution {
    public int solve(int A) {
        long start=0;
        long  end=A;
        long mid;
        while(start<=end){
            mid =((start+end)/2); //finding mid value
            if (mid*mid==A){ //finding square root of Number
                return (int)mid; //return square root Number
            }
            else if (mid*mid>A){ // Number*Number > square Number
                end=mid-1;
            }
            else if(mid*mid<A){ //Number*Number < square Number
                start=mid+1;
            }
        }
        return -1; // not a perfect square Number return -1
    }
}
