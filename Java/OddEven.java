import java.util.Scanner;
public class OddEven{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		System.out.println("Please enter a number");
		int n = s.nextInt();

		if((n&1)==1)
			System.out.println("your number is odd");
		else
			System.out.println("your number is even");
	}
}
