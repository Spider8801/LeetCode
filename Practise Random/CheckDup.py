class Solution:
    def contains_duplicate(self, nums) -> bool:
        for i in range(len(nums)):
            print("i",i)
            for j in range(i+1,len(nums)):
                print("j",j)
                if nums[i]==nums[j]:
                    return True
        return False

if __name__=="__main__":
    sol= Solution()
    num1= [1,2,3,4]
    print(sol.contains_duplicate(num1))
    num2= [1,2,1,4]
    print(sol.contains_duplicate(num2))
    num3= [1,4,y,3]