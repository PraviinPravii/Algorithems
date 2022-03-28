class Solution:
    # @param A : integer
    # @return an integer
    def solve(self, A):
        start=0
        end=A
        while start<=end:
            mid=(start+end)//2# Division By 2
            if mid*mid==A: #number equals to number*number=number^2
                return mid #return Sqare root
            elif mid*mid>A: #checking number*number>Sqare number
                end=mid-1  #decrementing by half
            elif mid*mid<A: #checking number*number less then Sqare number
                start=mid+1 #increamneting by half
        return -1 #not found return -1

                 

            
            

