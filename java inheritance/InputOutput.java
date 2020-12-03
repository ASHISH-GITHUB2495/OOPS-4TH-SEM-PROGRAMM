import java.io.*;
import java.util.*;

class InputOutput
{
  public static void main(String[] args) throws IOException
  { 

   //Using Sanner Class
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter an integer");
    int a = sc.nextInt();

    System.out.println("Enter a floating Number");
    float b = sc.nextFloat();

   //using Data Input Stream  Class 
   DataInputStream ds = new DataInputStream(System.in);

   System.out.println("Enter a text");
   String s = ds.readLine();

   System.out.println("Enter an integer");
   int c = Integer.parseInt(ds.readLine());

  System.out.print("a = "+a+" ");
  System.out.println("b = "+b);
  System.out.println("s = "+s);
  System.out.println("c = "+c);
          
        //using console class
        System.out.println("Enter the input string");
        String name = System.console().readLine(); 
          
        System.out.println("You entered: " + name);  

        //using Buffer Reader Class

        BufferedReader reader =  
                   new BufferedReader(new InputStreamReader(System.in)); 
         
        System.out.println("Enter the input string");
        String name1 = reader.readLine(); 
  
        System.out.println("You entered: " + name); 

      //System.err is used to display errors if any during the execution of the program.
  }
}

/*
Output:

Enter an integer
4
Enter a floating Number
2.0
Enter a text
shreyu
Enter an integer
7

4 2.0
shreyu
7

Enter the input string
shreyu
You entered: shreyu

Enter the input string
shreyu
You entered: shreyu


*/