import java.io.*;
class CopyCharacters
{
  public static void main(String args[])
  {
    File inFile = new File("input.txt");
    File outFile = new File("output.txt");
    FileReader in = null;
    FileWriter out = null;
    try
   {
      in = new FileReader(inFile);
      out = new FileWriter(outFile);
      int ch;
      while((ch=in.read())!=-1)
      {
        out.write(ch);
      }
   }
   catch(IOException e)
   {
     System.out.println(e);
     System.exit(-1);
     
   }
   finally
   {
     try
     {
        in.close();
        out.close();
     }
     catch(IOException e)
     {}
   }
  }
}


/*
Initially input.txt has content "Heritage"
output.txt is empty

Finally input.txt has content "Heritage"
output.txt has content "Heritage"



*/
