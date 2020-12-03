import java.applet.*;
import java.awt.*;
/*<applet code="AppletLifeCycle.class" width="500" height="500">
</applet>
*/
public class AppletLifeCycle extends Applet{
String msg;
public void init(){
msg="Inside init--";
System.out.println("Applet is Initialized");
}
public void start(){
msg+="Inside start--";
System.out.println("Applet is being Executed");
}
public void stop()
{
msg+="Inside stop--";
System.out.println("Applet execution has Stopped");
}
public void paint(Graphics g)
{
msg+="Inside paint--";
g.drawString(msg,10,50);
System.out.println("Painting the Applet...");
}
public void destroy()
{
System.out.println("Applet has been Destroyed");
}
}