static int H;
static int B;
static boolean flag = true;
 static 
 {
     Scanner sc = new Scanner(System.in);
     H = sc.nextInt();
     B = sc.nextInt();
     sc.close();
     try{
        if(H<=0 || B<=0)
     {
        flag = false;
        throw new Exception("Breadth and height must be positive");
     } 
    }
     catch(Exception E){
         System.out.println(E);
         System.exit(0);
     } 
 }
