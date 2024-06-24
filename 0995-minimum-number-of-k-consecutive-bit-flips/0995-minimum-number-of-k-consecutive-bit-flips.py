class Solution:
    def minKBitFlips(self, nums: List[int], k: int) -> int:
        n = len(nums)
        precount = [0 for i in range(n+1)]
        for i in range(0, n-k+1):
            if(precount[i] - precount[max([0, i-k+1])])%2 == 0:
                if(nums[i] == 0):
                    precount[i+1] = precount[i] + 1
                else:
                    precount[i+1] = precount[i]
            else:
                if(nums[i] == 0):
                    precount[i+1] = precount[i] 
                else:
                    precount[i+1] = precount[i] + 1
                    
        for i in range(n-k+1, n):
            precount[i+1] = precount[i]
            
        print(precount)
            
        for i in range(n-k+1, n):
            last_index = max([0, i-k+1])
            parity = (precount[i] - precount[last_index])%2
            if ( parity == 0) and nums[i] == 1:
                print(i, nums[i], parity, "ok")
                continue
            elif (parity == 1) and nums[i] == 0:
                print(i, nums[i], parity, "ok")
                continue
                
            else:
                print(i, nums[i], parity, "Not ok")
                return -1
            
        return precount[n]
                
            
            
        
            
            
#         count=0
#         n=len(nums)
#         last=0
#         for i in range(len(nums)-k+1):
#             if(nums[i] == 0):
#                 for j in range(i, i+k):
#                     nums[j] = nums[j]^1
#                 count += 1
#             last=i
                
#         x=nums[last]
#         for y in range(n-k, n):
#             if x!=nums[y]:
#                 return -1
                
#         return count
        
            
        
        