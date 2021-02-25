import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
       Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" ); 
    }
    static boolean isAnagram(String a, String b) {
      if(a.length()!=b.length())
      {
          return false;
      }  
      else{
          char[] ca = a.toLowerCase().toCharArray();
          char[] cb = b.toLowerCase().toCharArray();
          Arrays.sort(ca);
          Arrays.sort(cb);
          int n = ca.length;
          for(int i=0;i<n;i++)
          {
              if(ca[i]!=cb[i])
              {
                  return false;
              }
          }
          return true;
      }
    }
}

