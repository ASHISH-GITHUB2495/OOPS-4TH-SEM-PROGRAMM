class Outer {
int outer_x = 100;

void display() {
class local{
int z=200; 
local(){outer_x++;
//y++;
z++;
}
void display(){System.out.println("display: z = " + z);}
}

local one=new local();
local two=new local();

System.out.println("display: outer_x = " + outer_x);
//System.out.println("display: y= " + y);
one.display();
two.display();
}

}

class InnerClassDemo2 {
public static void main(String args[]) {
Outer obj = new Outer();
obj.display();
}
}
