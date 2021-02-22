import java.util.*;
import java.text.*;

public class Solution {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        String us = getCurrency(payment,Locale.US);
        String india = getCurrency(payment,new Locale("en","in"));
        String china = getCurrency(payment,Locale.CHINA);
        String france = getCurrency(payment,Locale.FRANCE);
        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
    static String getCurrency(double payment,Locale l)
    {
        NumberFormat F = NumberFormat.getCurrencyInstance(l);
        return (F.format(payment));  
    }
}