import java.util.*;
import java.io.*;

public class Program304
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

            boolean bRet = false;

            bRet = fobj.createNewFile();

            if(bRet==true)
            {
                System.out.println("File gets succesfully created");
            }
            else
            {
                System.out.println("Unable to create file");
            }
        }
        catch(IOException obj)
        {
            System.out.println("Exception occured");
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}
