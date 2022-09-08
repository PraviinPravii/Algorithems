int Solution::singleNumber(const vector<int> &A) {
    int XOR=0;
    for(int i=0;i<A.size();i++){
        XOR^=A[i];
    }
    return XOR;
}
/*
This Code use for find the unique number in array.

if Every Element Occurs twice and only one Element occurs once's in the array

*/
