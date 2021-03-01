import java.io.*;
import java.util.*;

public class Solution {
    public static int[] subArray(int[] array, int beg, int end) {
        return Arrays.copyOfRange(array, beg, end + 1);
    }
    static int sum(int[] array)
    {
        int sum=0;
        for(int i=0;i<array.length;i++)
        {
           sum +=array[i]; 
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
        }
        sc.close();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int[] subarr = subArray(arr,i,j);
                if(sum(subarr)<0)
                {
                    count++;
                }
            }
        }
        System.out.print(count);
    }
}