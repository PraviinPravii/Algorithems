def different_bit_sum(A):
    Len=len(A)
    ans=0
    for i in range(32):
        once=0
        zeros=0
        for j in range(Len):
            if ((A[j]>>i)&1==1):
                once+=1
            
        zeros=Len-once
        ans+=once*zeros*2;
    return ans
A = [1, 3, 5]
print(different_bit_sum(A))
        
