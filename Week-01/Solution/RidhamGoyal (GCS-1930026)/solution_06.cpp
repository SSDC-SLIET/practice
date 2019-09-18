import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args)  throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
		int t = Integer.parseInt(br.readLine()); 
		for(int z=0;z<t;z++){
		String s = br.readLine(); 
		s=s.toLowerCase();
		s=s.replaceAll("[^a-zA-Z0-9]","");
		String flag = "YES";
		for(int i=0;i<s.length();i++){
		    if(s.charAt(i)!=s.charAt(s.length()-1-i)){
		        flag="NO";
		    }
		}
		
		
		System.out.println(flag);
		
		
		}
	}
}
