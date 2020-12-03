class use_exception_4{
static void demoproc() throws IllegalAccessException{

throw new IllegalAccessException("demo");

}

public static void main(String args[]){
int a;
try{
demoproc();
}
catch(IllegalAccessException e){System.out.println(e);}
System.out.println("After catch");
}
}