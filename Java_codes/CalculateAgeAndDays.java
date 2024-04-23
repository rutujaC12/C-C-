//Calculation of Age & Day of Year

public class CalculateAgeAndDays 
{
    public static void main(String[] args) 
	{
        int birthYear = 2003; // birth year
        int birthMonth = 3;   // birth month
        int birthDay = 12;    // birth day
        
        int currentYear = 2023; // current year
        int currentMonth = 8;   // current month
        int currentDay = 22;    // current day
        
        int daysSinceBirth = calculateDaysSinceBirth(birthYear, birthMonth, birthDay, currentYear, currentMonth, currentDay);
        int age = calculateAge(birthYear, birthMonth, birthDay, currentYear, currentMonth, currentDay);
        
        System.out.println("Days since birth: " + daysSinceBirth);
        System.out.println("Age: " + age);
    }
    
    public static int calculateDaysSinceBirth(int birthYear, int birthMonth, int birthDay, int currentYear, int currentMonth, int currentDay)
 	{
        int daysInMonths[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // Check for leap year
        if ((currentYear % 4 == 0 && currentYear % 100 != 0) || (currentYear % 400 == 0)) 
		 {
            daysInMonths[2] = 29;
        }
        
        int daysSinceBirth = 0;
        
        // Calculate days for birth year
        for (int i = birthMonth + 1; i <= 12; i++)
		 {
            daysSinceBirth += daysInMonths[i];
        }
        daysSinceBirth += (daysInMonths[birthMonth] - birthDay);
        
        // Calculate days for current year
        for (int i = 1; i < currentMonth; i++) 
		 {
            daysSinceBirth += daysInMonths[i];
        }
        daysSinceBirth += currentDay;
        
        // Calculate days for intervening years
        for (int i = birthYear + 1; i < currentYear; i++) 
		 {
            	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) 
				{
                	daysSinceBirth += 366;
            	}
				else 
				{
                	daysSinceBirth += 365;
           		}
        }
        
        return daysSinceBirth;
    }
    
    public static int calculateAge(int birthYear, int birthMonth, int birthDay, int currentYear, int currentMonth, int currentDay) 
	{
        	int age = currentYear - birthYear;
        
        	if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) 
			{
            		age--;
        	}
        
        	return age;
    }
}

