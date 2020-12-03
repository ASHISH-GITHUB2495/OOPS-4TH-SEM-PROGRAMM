
class overload{

//int add(int a, int b){return a+b;}
float add(float a, float b){return a*b;}
float add(int a, float b){return a-b;}
}

class overloadtest{
public static void main(String args[]){

overload obj=new overload();
//System.out.println(obj.add(1,2));
System.out.println(obj.add(1.5f,2.5f));
System.out.println(obj.add(1,2.7f));


}


}
