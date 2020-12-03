class use_exception{
public static void main(String args[]){
int a;
try{
	try{
	a=5/Integer.parseInt(args[0]);
	int c[]=new int[Integer.parseInt(args[1])];
	c[20]=100;
	String s=null;
	System.out.println(s.length());
	}
	catch(ArithmeticException e){a=1; System.out.println("ArithmeticException");}
	catch(ArrayIndexOutOfBoundsException e){System.out.println(e);}
}
catch(NullPointerException e){e.printStackTrace();}
catch(Exception e){System.out.println("next codes will be unreachable");}
System.out.println("After catch");

}
}