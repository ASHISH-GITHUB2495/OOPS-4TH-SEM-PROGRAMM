class NewThread implements Runnable {
Thread t;
String name;
NewThread(String name) {
this.name=name;
t = new Thread(this);
t.setPriority(Thread.MAX_PRIORITY);
System.out.println("Child thread: " + t);
t.start();
}
public void run() {
Thread.currentThread().setName("SEC B");
try {
for (int i = 5; i > 0; i--) {
System.out.println("Child Thread: " +Thread.currentThread().getName()+" "+ i);
Thread.sleep(1000);
}
}
catch (InterruptedException e) {
System.out.println("Child interrupted.");
}
System.out.println("Exiting child thread.");
}
} 
class ThreadDemo {
public static void main(String args[]) {

NewThread t1=new NewThread("one");
NewThread t2=new NewThread("two");
NewThread t3=new NewThread("three");
System.out.println("Thread one is alive " + t1.t.isAlive());
System.out.println("Thread two is alive " + t2.t.isAlive());
System.out.println("Thread three is alive " + t3.t.isAlive());
try {
System.out.println("Waiting for children threads to finish");
t1.t.join();t2.t.join();t3.t.join();
System.out.println("children threads finished");
}
catch (InterruptedException e) {
System.out.println("Main thread interrupted.");
}
System.out.println("Thread one is alive " + t1.t.isAlive());
System.out.println("Thread two is alive " + t2.t.isAlive());
System.out.println("Thread three is alive " + t3.t.isAlive());
System.out.println("Main thread exiting.");
}
} 
