public class SavingsAccount 
{
    private static double annualInterestRate = 0.0;

    private String accountNumber;
    private double balance;

    public SavingsAccount(String accountNumber, double balance) 
    {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public void deposit(double amount) 
    {
        balance += amount;
    }

    public void withdraw(double amount) 
    {
        if (amount <= balance) 
        {
            balance -= amount;
        } 
        else 
        {
            System.out.println("Insufficient balance");
        }
    }

    public double getBalance() 
    {
        return balance;
    }

    public static void setAnnualInterestRate(double rate) 
    {
        // Static method to set the annual interest rate (class-level variable)
        annualInterestRate = rate;
    }

    public static double calculateMonthlyInterest(double balance) 
    {
        // Static method to calculate monthly interest
        double monthlyInterestRate = annualInterestRate / 12 / 100;
        double monthlyInterest = balance * monthlyInterestRate;
        return monthlyInterest;
    }

    public static void main(String[] args) 
    {

        SavingsAccount account1 = new SavingsAccount("123456", 1000.0);
        SavingsAccount account2 = new SavingsAccount("789012", 2000.0);

        SavingsAccount.setAnnualInterestRate(5.0);

        System.out.printf("Monthly Interest for Account 1: $%.2f%n", SavingsAccount.calculateMonthlyInterest(account1.getBalance()));
        System.out.printf("Monthly Interest for Account 2: $%.2f%n", SavingsAccount.calculateMonthlyInterest(account2.getBalance()));

        SavingsAccount.setAnnualInterestRate(6.0);

        System.out.printf("Updated Monthly Interest for Account 1: $%.2f%n", SavingsAccount.calculateMonthlyInterest(account1.getBalance()));
        System.out.printf("Updated Monthly Interest for Account 2: $%.2f%n", SavingsAccount.calculateMonthlyInterest(account2.getBalance()));
    }
}
