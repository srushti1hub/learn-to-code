public static String getSmallestAndLargest(String s, int k) {
        String current = s.substring(0,k);
        String smallest = current;
        String largest = current;
        for(int i=1;i<=s.length()-k;i++)
        {
            current = s.substring(i,i+k);
            if(current.compareTo(largest)>0)
            {
                largest = current;
            }
            if(current.compareTo(smallest)<0)
            {
               smallest = current; 
            }
        }
        return smallest + "\n" + largest;
    }