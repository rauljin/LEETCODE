/*

Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome.

*/

class Solution {
public:
    bool isPalindrome(string s) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(s.empty()) return true;
        int left=0;
        int right=s.size()-1;
        while(left<right){
            while(!isalnum(s[left])){
                left++;
                if(left>=right){
                    break;
                }
            }
            while(!isalnum(s[right])){
                right--;
                if(left>=right){
                    break;
                }
            }
            
            if (left>right){
                return true;
            }
            
            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            left++;
            right--;
            
        }
        return true;
    }
};
