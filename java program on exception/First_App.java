import java.applet.Applet;  
import java.awt.*; 
import java.net.*;
/*  <applet code="First_App.class" width="300" height="300">  
    </applet>  
*/ 
public class First_App extends Applet{  
  
public void paint(Graphics g){  
setBackground(Color.BLUE);
setForeground(Color.RED);
g.setFont(new Font("Verdana",Font.BOLD,20)); 
g.drawString("This is my first applet",10,150); 

g.drawString("getDocumentBase "+getDocumentBase(),10,200);
URL u=getCodeBase();
String msg=u.toString();
g.drawString(msg,10,170);
}  
  
}  