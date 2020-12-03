import java.awt.*;
import java.applet.*;
/*  <applet code="SampleBanner.class" width="300" height="300">  
    </applet>  
*/

public class SampleBanner extends Applet implements Runnable {
   String str = "This is a simple Banner ";
   Thread t =null;
   boolean b;
   
   public void init() {
     setBackground(Color.gray);
     setForeground(Color.yellow);
   }
   public void start() {
    t = new Thread(this);
    b = false;
    t.start();
   }
   public void run () {
      char ch;
      for( ; ; ) {
      try {
         repaint();
         Thread.sleep(250);
         ch = str.charAt(0);//'h'
         str = str.substring(1, str.length());//str="ABCDEFGH";str.substring(1,5)"BCDE"
         str = str + ch;//"s is a simple Banner Thi"
	 if(b)
		break;
      }
      catch(InterruptedException e) {}
      }
   }
   public void stop(){b=true;
		      t=null;
                     }
	
   public void paint(Graphics g) {
    /*  g.drawRect(1,1,300,150);
      g.setColor(Color.yellow);
      g.fillRect(1,1,300,150);
      g.setColor(Color.red);*/
      g.drawString(str, 1, 150);
   }
}