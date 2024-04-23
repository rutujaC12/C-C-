import java.util.Scanner;

public class MathOperation {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        
        try 
       {
            System.out.print("Enter the first number: ");
            int num1 = scanner.nextInt();
            
            System.out.print("Enter the second number: ");
            int num2 = scanner.nextInt();
            
            int result = divideNumbers(num1, num2);
            System.out.println("Result of division: " + result);
        } 
	catch (ArithmeticException e) 
	{
            System.err.println("Error: Division by zero is not allowed.");
        } 
	catch (java.util.InputMismatchException e) 
	{
            System.err.println("Error: Please enter valid integers.");
        } 
	finally 
	{
            // Close the scanner in the finally block to ensure it always gets closed.
            scanner.close();
        }
    }
    
    public static int divideNumbers(int dividend, int divisor) 
	{
        if (divisor == 0) 
		{
            		// Throw an ArithmeticException if attempting to divide by zero.
           		 throw new ArithmeticException("Division by zero is not allowed.");
       		}
        return dividend / divisor;
    }
}
