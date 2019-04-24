#include <string>

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		char *strL = s.data();
		char *strR = strL+1;
		int temMax = 1,Max = 0;
		while (strR!='/0')
		{
			while(stL!=strR)
			{
				if(*strL!=*strR){
					strL++;
					temMax++;
				}else{

					strL = strL+1;
					if(temMax>Max) {Max = temMax;}

				}
		}
	}
};