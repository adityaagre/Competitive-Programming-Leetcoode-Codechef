class Solution(object):
    def luckyNumbers (self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        mins=[]
        ans=[]
        for i in range(len(matrix)):
            mn = min(matrix[i])
            mins.append(mn)
            
        print(mins)
            
        for i in range(len(matrix[0])):
            # col = [matrix[j][i] for j in range(len(matrix))]
            col = [matrix[row][i] for row in range(len(matrix))]
            print(col)
            big = max(col)
            print(big)
            if big in mins:
                ans.append(big)
                
        return ans
        