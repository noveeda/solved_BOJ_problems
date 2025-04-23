import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int 총가격 = sc.nextInt();
		int 개수 = sc.nextInt();
		int d = 0;
		for(int i=0; i<개수; i++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			int c = a*b;
			 d += c;
		}
		
		if(총가격 == d) {
			System.out.println("Yes");
		}else {
			System.out.println("No");
		}
	
	}
}
