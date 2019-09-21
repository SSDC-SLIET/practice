import java.io.*; 
import java.util.*;

class GFG{ 
    public static void main(String args[]) { 
        int t,i,j;
        boolean reverseString;
        
        String s = new String();
        
        
        Scanner sc = new Scanner(System.in);
        t=sc.nextInt();
        s = sc.nextLine();
        
        for(j=0;j<t;j++)
        {
             s = sc.nextLine();
             s.trim();
             s = s.replaceAll("[^a-zA-Z0-9]", "");
             
     
            String s1 = new StringBuilder(s).reverse().toString();
             reverseString=s.equalsIgnoreCase(s1);
             
             if(reverseString==true){
                 System.out.println("YES");
             }
             else
                 System.out.println("NO");
            s1 = "";
        
            
        }
        
         
    }    
}
