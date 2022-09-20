class solution:
   def solve(A,M):
      count=0
      for i in range(len(A)):
         A[i]=A[i]%M #module the array by M array contains 0 to M-1
      freq_map={}
      for i in A:
         if freq_map.get(i)==None: # Creating the frequency of remainders 0 to M-1
            freq_map[i]=1
         else:
            freq_map[i]+=1
      count+=(freq_map[0]*(freq_map[0]-1))//2  # counting of 0 self modulo pairs ((freq of 0)*(freq of 0)-1)//2
      for i in range(1,M//2+1):   # iterating through M/2 only unique pairs
         k=M-i
         if i==k:   # self pairs if M is 6 3 is M-3  3 holds self pairs (3 x(3-1))/2
            count+=(freq_map[i]*(freq_map[i]-1))//2
         else:
            count+=freq_map[i]*freq_map[k] #pairs of arrays modulo of M==0
      return count
         


A=[2,3,4,8,6,15,5,12,17,7,18,10,9,16,23]
M=6
print(solution.solve(A,M))
