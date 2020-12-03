class Box {                     //Box is new user defined data type  
    double width;
    double height;              //Box is used to declare objects  for this type 
    double depth;               //Class declaration only creates a template, not object 
    				//This code does not cause any objects of type Box
    Box(){width=height=depth=-1;} //default constructor
    Box(double width,double height,double depth)	{this.width=width;this.height=height;this.depth=depth;}
				//parameterized constructor // use of this?
    Box(Box ob){width=ob.width;height=ob.height;depth=ob.depth;}//copy constructor

     //display volume a box      
    void volume ( ) {
    System.out.print ("Volume is");
    System.out.println(width*height*depth);
}   }      
class BoxDemo3 {
    public static void main (String args [ ]) {
          Box mybox1 = new Box( );        //After this statement executes, mybox1
	  Box mybox2 = new Box( );      //and mybox2 will be instances of Box
         
	// assign values to mybox1’s instance variables
         mybox1.width=10;
         mybox1.height=20;
         mybox1.depth=15;
         //assign different values to mybox2’s  instance variables 
	mybox2.width=3;
        mybox2.height=6;
        mybox2.depth=9;
       //display volume of first and second boxes
        mybox1.volume();                         
	mybox2.volume();   
	Box mybox3 =  new Box (1,2,3 );  
	Box clone=new Box(mybox3) ;  
	mybox3.volume();                         
	clone.volume();

	                 
 }   } 


