import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        List<Integer> L = new ArrayList<Integer>(N);
        for(int i=0;i<N;i++)
        {
            int element = sc.nextInt();
            L.add(element);
        }
        int Q = sc.nextInt();
        for(int i=1;i<=2*Q;i++)
        {
            String Query = sc.nextLine();
            if(Query.equals("Insert"))
            {
                int x = sc.nextInt();
                int y = sc.nextInt();
                L.add(x,y);
            }
            else if(Query.equals("Delete"))
            {
                int x = sc.nextInt();
                L.remove(x);
                N--;
            }
        }
        for(Integer i : L)
        {
            System.out.print(i+" ");
        } 
    }
}