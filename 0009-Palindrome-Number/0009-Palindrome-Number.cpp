class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        double original = x; 
        double reversedInt = 0;
        while (x > 0) {
            reversedInt = reversedInt * 10 + x % 10;
            x = x / 10;
        }
        
        return (original == reversedInt);
        
    }
};