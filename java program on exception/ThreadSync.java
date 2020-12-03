class abc{
void func(String msg){
System.out.print("["+msg);
try{
Thread.sleep(500);
}catch(InterruptedException e){System.out.println("Interrupted");}
System.out.println("]");
}
}
class caller_abc implements Runnable{
String msg; abc object;Thread t;
public caller_abc(abc obj,String s){
object=obj;msg=s;t=new Thread(this); t.start();
}
public void run(){synchronized(object){object.func(msg);}} //
}
// [Hello][section][b]
class ThreadSync{
public static void main(String args[]){
abc target=new abc();
caller_abc ob1= new caller_abc(target,"Hello");
caller_abc ob2= new caller_abc(target,"Section");
caller_abc ob3= new caller_abc(target,"B");

try{
ob1.t.join();ob2.t.join();ob3.t.join();
}catch(InterruptedException e){
System.out.println("Interrupted");}
}
}