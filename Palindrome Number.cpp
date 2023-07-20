// Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        long s=0;
			  long m,r;
				m=x;
        while(x>0)
				{
					r=x%10;
					s=(s*10)+r;
					x=x/10;
					}
					if (m==s)
					{
						return true;
						}
						else
						{
							return false;
							}
	}
};
