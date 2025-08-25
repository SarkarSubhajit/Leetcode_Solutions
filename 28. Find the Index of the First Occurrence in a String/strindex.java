
import java.util.Scanner;

//package Data_Structure_Algo.Leetcode;

public class strindex {
    public int strStr(String haystack, String needle) {
        int needle_index = 0;

        for (int i = 0; i < haystack.length(); i++) {
            if (haystack.charAt(i) == needle.charAt(needle_index))
                needle_index++;
            else {
                i = i - needle_index;
                needle_index = 0;
            }
            if (needle_index == needle.length())
                return i - needle_index + 1;
        }
        return -1;
    }
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(System.in)) {
            String haystack = sc.nextLine();
            String needle = sc.nextLine();
            strindex obj1 = new strindex();
            System.out.println(obj1.strStr(haystack, needle));
        }
    }
}
