import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        A = A.toLowerCase();
        char[] arr = A.toCharArray();
        for(int i=0;i<(arr.length/2);i++)
        {
            if(arr[i] != arr[arr.length-i-1])
            {
                 System.out.println("No");
                 return;
            }
        }
         System.out.println("Yes");
    }
}