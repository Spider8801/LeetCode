class RevVowel:
    def __init__(self):
        pass
    def ReverseVowels(self,s):

        v= "aeiou"
        s= list(s.lower())
        f=0
        l=len(s)-1
        while f<l:
            if s[f] in v and s[l] in v:
                s[f],s[l]=s[l],s[f]
                f+=1
                l-=1
            elif s[f] not in v:
                f+=1
            elif s[l] not in v:
                l-=1
            else:
                f+=1
                l+=1
        return s

if __name__=="__main__":
    input_str=input("Enter String Name")
    c_o= RevVowel()
    reversed_v= c_o.ReverseVowels(input_str)
    print("The Reversed Vowel String is:",reversed_v)


