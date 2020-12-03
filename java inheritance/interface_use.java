interface Admin{
String colg_name="HIT";
void schedule_exam(int sem);
}

/*interface faculty{
//int faculty_id;
//String name;

//faculty(int x, String s){ faculty_id=x;name=s;}
void display();//{System.out.println(faculty_id +": "+name);}
void teach(int sem);
}

abstract class hod implements Admin,faculty{
int faculty_id;
String name;
hod(int x, String s){faculty_id=x; name=s;}
//public void display(){System.out.println(faculty_id +": "+name);}
public void teach(int sem){

if(sem==1){System.out.println("Intro to C");}
if(sem==3){System.out.println("DS & Algo");}
if(sem==4){System.out.println("D&A of Algorithms");}
}
public void schedule_exam(int sem){ 

if(sem==3){System.out.println("3rd sem schedule");}
//similar as above
}

}
*/
class cse_hod implements Admin{
int faculty_id; String name;
cse_hod(int x, String s){faculty_id=x;name=s;}
void display(){System.out.println(faculty_id +": "+name);}
public void schedule_exam(int sem){ 

if(sem==3){System.out.println("3rd sem schedule");}
//similar as above
}

}
class interface_use{
public static void main(String args[]){

cse_hod obj= new cse_hod(123, "ABC");
obj.display(); 
obj.schedule_exam(3);
//obj.teach(3);
}
}
