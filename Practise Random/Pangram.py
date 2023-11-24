class Solution:
    def checkPangram(self, sentence)->bool:
        seen= set()

        for currChar in sentence.lower():
            if currChar.isalpha():
                seen.add(currChar)
        
        return len(seen) == 26

sol= Solution()

print(sol.checkPangram("The Quick Brown Fox Jumps Over The Lazy Dog"))

print(sol.checkPangram("This is a testing Program"))
        
