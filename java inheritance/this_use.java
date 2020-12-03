class A{
int a,b;
A(){
this(100,200);
System.out.println("Default");
}

A(int x, int y){
this(x);
System.out.println("two params");
b=y;
}

A(int x){

System.out.println("one param");
a=b=x;}
}

class this_use{
public static void main(String args[]){

A obj=new A();
A obj2=new A(1,2);
A obj3=new A(10);
}
}
