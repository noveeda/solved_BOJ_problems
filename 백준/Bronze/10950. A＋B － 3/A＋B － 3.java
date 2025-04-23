import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int i = sc.nextInt();
		
		
		for(int j=0; j<i; j++) {
			int n = sc.nextInt();
			int m = sc.nextInt();
			System.out.println(n + m);
		}
		
	}

}
