{
import java.util.*;
class Replace{
public static void main(String[] args){
	Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	while(t-->0){
		int n=sc.nextInt();
		GfG g=new GfG();
		g.convertFive(n);
	}
}
}
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below*/
class GfG{
	public static void convertFive(int n){
        
        String s = new String(String.valueOf(n));
        System.out.println(s.replace('0','5'));
        
}
}
