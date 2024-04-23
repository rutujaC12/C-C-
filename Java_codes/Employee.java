/*
Write a program to develop class employee with constructor to initialize instance
variables. Provide Set method and Get method for instance variables. Also provide a
method to raise Salary of each employee by 10%.
*/


import java.util.*;

public class Employee
{
	String FirstName;
	String LastName;
	double salary;
	int empID;

	Employee()
	{
		FirstName=null;
		LastName=null;
		salary=0.0;
	};

	void setFirstName()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Fisrt Name:");
		FirstName=sc.nextLine();
	}

	void setLastName()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Last Name:");
		LastName=sc.nextLine();
	}

	void setSalary()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Salary:");
		salary=sc.nextDouble();	
	}

	void setEmpID()
	{	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Employee ID:");
		empID=sc.nextInt();
	}

	String getFirstName()
	{
		return FirstName;
	}

	String getLastName()
	{
		return LastName;
	}

	double getSalary()
	{
		return salary;
	}

	int getEmpID()
	{	
		return empID;
	}
	
	double calculateSalary()
	{
		double SalaryYear=salary * 12;
		return SalaryYear;
	}
	void Display(double SalaryYear,double SalaryRaise,double RaisedSalaryNextYear)
	{
		System.out.println("Employee:"+FirstName.concat(" ").concat(LastName));
		System.out.println("Employee ID:"+empID);
		System.out.println("Salary per Month:"+salary);
		System.out.println("Salary per Year:"+SalaryYear);
		//System.out.println("Salary Raise:"+SalaryRaise);
		//System.out.println("Salary Raised Next Year:"+RaisedSalaryNextYear);
	}

	public static void main(String []args)
	{
		
		Employee a = new Employee();
		double SalaryYear = 0.0;
		double SalaryRaise = 0.0;
		double RaisedSalaryNextYear = 0.0;

		System.out.println("Enter the Employee Details:");
		a.setFirstName();
		a.setLastName();
		a.setSalary();
		a.setEmpID();
		
		SalaryYear=a.calculateSalary();
		SalaryRaise=a.calculateSalary();
		RaisedSalaryNextYear=a.calculateSalary();

		a.Display(SalaryYear,SalaryRaise,RaisedSalaryNextYear);

	}

}








