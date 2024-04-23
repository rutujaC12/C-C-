import java.util.*;

class Age
{
	public static void main(String []args)
	{
		System.out.println("Hello..! Welcome to Java Programming");
		
		Scanner myObj = new Scanner(System.in); 

		System.out.print("Enter Name:");
		String name = myObj.nextLine();

		System.out.print("Enter BYear:");
		int byear =myObj.nextInt();

		System.out.print("Enter  Current Year:");
		int year =myObj.nextInt();

		System.out.println("Age: "+(year-byear));
	}
}