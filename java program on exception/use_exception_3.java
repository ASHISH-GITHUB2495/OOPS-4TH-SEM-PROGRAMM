import java.util.*;
class use_exception_3{
static void demoproc(){
//throw new NullPointerException();
Scanner sc=new Scanner(System.in);
int a=sc.nextInt();
if(a==0)
throw new ArithmeticException("divide by zero");
int b=5/a;
}

public static void main(String args[]){
try{
demoproc();
}
catch(ArithmeticException e){System.out.println(e);}
System.out.println("After catch");
}
}