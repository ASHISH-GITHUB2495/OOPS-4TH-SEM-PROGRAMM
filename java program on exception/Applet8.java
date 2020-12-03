import java.awt.*;
import java.applet.*;


/* 
<applet code="Applet8" width="400" height="200">
<param name="fontName" value="Courier">
<param name="fontSize" value="14">
<param name="leading" value="2">
<param name="accountEnabled" value="true">
<param name="Destination" value="California">
</applet>
*/
  
  
public class Applet8 extends Applet 
{
String fontName;
int fontSize;
float leading;
boolean active;
String destination;



public void start()
{
String param;
fontName = getParameter("fontName");
	if(fontName==null) fontName="not found";
param = getParameter("fontSize");
	try{ if(param!=null)
		fontSize=Integer.parseInt(param);
	     else
		fontSize=0;
	   }
	catch(NumberFormatException e){fontSize=-1;}
param = getParameter("leading");
	try{
	if(param!=null)
		leading=Float.valueOf(param).floatValue();//parseFloat(param)
	else
		leading=0;
	} catch(NumberFormatException e){leading=-1;}
param = getParameter("accountEnabled");
	if(param!=null)
		active=Boolean.valueOf(param).booleanValue();
destination = getParameter("Destination");

}



public void paint(Graphics g)
{
g.drawString("Reading parameters passed to this applet -", 20, 20);
g.drawString("FontName -" + fontName, 20, 40);
g.drawString("FontSize -" + fontSize, 20, 60);
g.drawString("Leading -" + leading, 20, 80);
g.drawString("Account active -" + active, 20, 100);
g.drawString("Favorite destination -" + destination, 20, 120);
}

}