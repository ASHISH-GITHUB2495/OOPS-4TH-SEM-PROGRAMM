class use_exception_2{
static void demoproc(){
String s=null;
System.out.println(s.length());
}

public static void main(String args[]){
int a;
try{
	try{
	a=5/Integer.parseInt(args[0]);
	int c[]=new int[Integer.parseInt(args[1])];
	c[20]=100;
	demoproc();
	}
	catch(ArithmeticException e){a=1; System.out.println("ArithmeticException");}
	catch(ArrayIndexOutOfBoundsException e){System.out.println(e);}
}
catch(Exception e){System.out.println(e);}
System.out.println("After catch");
}
}