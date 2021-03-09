class Printer
{
   public static <E> void printArray(E[] arr) 
   {
       for(E e : arr)
       System.out.println(e);
   }
}