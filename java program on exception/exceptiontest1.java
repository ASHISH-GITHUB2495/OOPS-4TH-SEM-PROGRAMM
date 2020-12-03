import java.util.*;
class NotEqualException extends Exception{
float a;
NotEqualException(float x){a=x;}
public String toString(){
return "Float variable "+ a + " is not equal to pi(3.14)";
}
}

class exceptiontest1{
public static void main(String args[]){
Scanner sc= new Scanner(System.in);
System.out.println("Enter value to the float variable");

float val=sc.nextFloat();
System.out.println("val=="+val);


System.out.println("Absolute difference between val and PI is "+Math.abs(val-3.14f));
try{
if(Math.abs(val-3.14f)>0.001)
throw new NotEqualException(val);
}catch(NotEqualException e){
System.out.println("NotEqualException caught!"+e);
}
}

}