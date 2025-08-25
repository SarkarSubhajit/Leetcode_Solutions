#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        //int HayLen = haystack.length(); [takes more space]
        //int NeeLen = needle.length(); [ "" ]
        int needle_index = 0;

        for (int i = 0; i < haystack.length(); i++) {
            // if the current characters are equal then increment needle_index
            if (haystack[i] == needle[needle_index]) {
                needle_index++;
            }

            // if not then start again from current haystack index
            // and reset the needle index
            else {
                i = i - needle_index;
		        cout << "-" << i << "-";
                needle_index = 0;
            }

            // check if the needle index reached needle end. That means you found
            // the needle in haystack and return the start index of the needle
            if (needle_index == needle.length()) {
                return i-needle.length()+1;
            }
        }
        return -1;
    }
};

int main() {
    string haystack, needle;
    cout << "Enter First String : ";
    getline(cin, haystack);
    cout << "Enter Second String : ";
    getline(cin, needle);

    Solution sol;

    cout << "Result : " << sol.strStr(haystack, needle) << endl;
	return 0;
}
