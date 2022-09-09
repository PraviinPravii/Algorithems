int Solution::solve(int A) {
    long int start=0;
    long int end=A;
    while (start<=end){
        long int mid=floor((start+end)/2);//finding mid value
        if (mid*mid==A){ //checking True condtion square root
            return mid;
        }
        else if(mid*mid>A){ //number*number greater then square  
            end=mid-1;
        }
        else if(mid*mid<A){ //number*number less then square  
            start=mid+1;
        }

    }
    return -1; // square root number not found return -1
}
