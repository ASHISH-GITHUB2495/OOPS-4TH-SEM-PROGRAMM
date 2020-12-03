public class static2{ 

static{
int y=2;
System.out.println("y="+y);
}
{
System.out.println("First");
} 
static int x;
public static void main(String args[]){
x--;
System.out.println("X="+x);
static2 obj=new static2();
}
static2(){System.out.println("Within constructor");}

{System.out.println("Second");}

static{System.out.println("x="+x);}
}  

