import java.util.*;
import java.io.*;


public class Program305
{
    public static void main(String arg[]) 
    {
        // create file 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of File : ");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            boolean bret = false;

            bret = fobj.exists();

            if(bret==true)
            {
                System.out.println("File is present");
            }
            else
            {
                System.out.println("There is no such file");
            }
           
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}
