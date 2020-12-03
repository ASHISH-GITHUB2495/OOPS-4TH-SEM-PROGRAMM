import java.util.*;

interface A{

default void show(){System.out.println("Default");}
static void display(){System.out.println("Static");}

}
class B{public void show(){System.out.println("Default_class");}}
class Matrix extends B implements A{

//public void show(){System.out.println("Sub_default");}
public void display(){System.out.println("Sub_static");}//this is not implementing interface static method
}

class default_static_interface{
public static void main(String args[]){
Matrix obj=new Matrix();
obj.display();
obj.show();
A.display();

}

}