import java.io.BufferedReader; 
import java.io.FileReader; 
import java.io.IOException;

public class IOStreamExample 
{
    public static void main(String[] args) 
  { 
    String fileName = "sample.txt";
    try 
    {
      FileReader fileReader = new FileReader(fileName);
      BufferedReader bufferedReader = new BufferedReader(fileReader);
      String line;
      while ((line = bufferedReader.readLine()) != null) 
      {   
        System.out.println(line);
      }
      bufferedReader.close(); 
      fileReader.close();
    } 
    catch (IOException e) {
          System.err.println("An error occurred while reading the file: " + e.getMessage());
      }
  }
}
