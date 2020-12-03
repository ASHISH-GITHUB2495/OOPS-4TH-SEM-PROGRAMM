class Outer {
int outer_x = 100;
static int outer_y;
static class nested{
int y=100;
void display(){
//System.out.println("display: outer_x = " + outer_x);
System.out.println("display: outer_y = " + outer_y);
System.out.println("display: y= " + y);
}
}
class Inner {
int y=1;
void display() {
System.out.println("display: outer_x = " + outer_x);
System.out.println("display: outer_y = " + outer_y);
System.out.println("display: y= " + y);
}
}
void showy(){//System.out.println(y);
}
}

class InnerClassDemo3 {
public static void main(String args[]) {
Outer.nested obj=new Outer.nested();
obj.display();
Outer.Inner obj2 = new Outer().new Inner();
obj2.display();
Outer obj3=new Outer();
Outer.Inner obj4=obj3.new Inner();
obj4.display();
}
}
