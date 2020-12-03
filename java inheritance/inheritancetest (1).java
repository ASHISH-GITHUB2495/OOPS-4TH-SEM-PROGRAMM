abstract class Animal{
int weight;
Animal(int w){weight=w;}
public void getWeight() {
System.out.println("weight "+weight);}
public abstract void eat();
//{System.out.println("Food");}
}

class Bird extends Animal{
Bird(int w){super(w);}
public void fly() {System.out.println("Bird is Flying");};
public void eat(){super.eat();System.out.println("insects");}
}

class inheritancetest{
public static void main(String args[]){
Animal e;//=new Animal(100);
//e.getWeight();
//e.fly();
e=new Bird(10);
e.getWeight();
//e.fly();
e.eat();
Bird b=new Bird(5);
b.getWeight();
b.fly();
b.eat();
}
}