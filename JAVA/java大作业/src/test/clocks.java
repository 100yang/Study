/**  
* <p>Title: kk.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2019年1月4日  
* @version 1.0  
*/
package test;

import java.awt.BorderLayout;
/**  
* <p>Title: kk</p>  
* <p>Description: </p>  
* @author 100110100  
* @date 2019年1月4日  
*/
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowEvent;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Line2D;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Timer;
import java.util.TimerTask;

import javax.media.CannotRealizeException;
import javax.media.Manager;
import javax.media.MediaLocator;
import javax.media.NoPlayerException;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JPanel;

import javazoom.jl.player.Player;

public class clocks {
	JFrame jf;
	JButton b1;
	Player player;
	MyPanel clockPanel;
	Ellipse2D.Double e;
	int x;
	int y;
	Line2D.Double hourLine;
	Line2D.Double minLine;
	Line2D.Double secondLine;
	GregorianCalendar calendar;

	int hour;
	int minute;
	int second;
	String timestr = "";

	static int sethour;
	static int setminute;
	static int setsecond;

	public static final int X = 60;
	public static final int Y = 60;
	public static final int X_BEGIN = 10;
	public static final int Y_BEGIN = 10;
	public static final int RADIAN = 50;

	public clocks() {
		jf = new JFrame();
		jf.setSize(300, 200);
		jf.setTitle("动态时钟");
		clockPanel = new MyPanel();
		jf.add(clockPanel, BorderLayout.CENTER);
		b1 = new JButton("设置闹钟");
		b1.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				// 输入要设置的闹钟时间
				JOptionPane.showMessageDialog(jf, "请输入闹钟开始的时间");
				sethour = Integer.parseInt(JOptionPane.showInputDialog("请输入小时："));
				setminute = Integer.parseInt(JOptionPane.showInputDialog("请输入分钟："));
				setsecond = Integer.parseInt(JOptionPane.showInputDialog("请输入秒："));

			}
		});
		jf.add(b1, BorderLayout.EAST);
		jf.setVisible(true);
		Timer t = new Timer();
		Task task = new Task();
		t.schedule(task, 0, 1000);// 每秒刷新一次
	}

	public void windowClosing(WindowEvent e) {
		jf.dispose();
		player.close();
	}

	File file = new File("郭顶 - 我们俩.mp3");

	public void play() {// 播放mp3文件
		try {
			BufferedInputStream buffer = new BufferedInputStream(new FileInputStream("郭顶 - 我们俩.mp3"));
			Player player = new Player(buffer);
			player.play();
		} catch (Exception e) {
			System.out.println(e);
		}
	}

	class MyPanel extends JPanel {
		public MyPanel() {
			//开始坐标 高度
			e = new Ellipse2D.Double(X_BEGIN, Y_BEGIN, 100, 100);
			hourLine = new Line2D.Double(X, Y, X, Y);
			minLine = new Line2D.Double(X, Y, X, Y);
			secondLine = new Line2D.Double(X, Y, X, Y);

		}

		public void paintComponent(Graphics g) {
			/*
			 * 须保留super.paintComponent(g);， 并且优先调用父类paintpaintComponent()方法，
			 * 否则JPanel画出来是空白面板，因为画笔要在父类中创建，然后在子类中使用才会生效
			 */
			super.paintComponent(g);
			Graphics2D g2 = (Graphics2D) g;
			//图形 坐标
			g2.drawString("12", 55, 25);// 整点时间
			g2.drawString("6", 55, 105);
			g2.drawString("9", 15, 65);
			g2.drawString("3", 100, 65);
			g2.drawString(timestr, 0, 130);
			g2.draw(e);
			g2.draw(hourLine);// 时针
			g2.draw(minLine);// 分针
			g2.draw(secondLine);// 秒针
		}
	}

	class Task extends TimerTask {
		public void run() {
			calendar = new GregorianCalendar();
			hour = calendar.get(Calendar.HOUR);
			minute = calendar.get(Calendar.MINUTE);
			second = calendar.get(Calendar.SECOND);

			if (sethour == hour && setminute == minute && setsecond == second) {
				JOptionPane.showMessageDialog(jf, "亲，该休息一下了");
				play();
			}

			timestr = "当前时间：" + hour + " : " + minute + " : " + second;

			hourLine.x2 = X + 40 * Math.cos(hour * (Math.PI / 6) - Math.PI / 2);
			hourLine.y2 = Y + 40 * Math.sin(hour * (Math.PI / 6) - Math.PI / 2);
			minLine.x2 = X + 45 * Math.cos(minute * (Math.PI / 30) - Math.PI / 2);
			minLine.y2 = Y + 45 * Math.sin(minute * (Math.PI / 30) - Math.PI / 2);
			secondLine.x2 = X + 50 * Math.cos(second * (Math.PI / 30) - Math.PI / 2);
			secondLine.y2 = Y + 50 * Math.sin(second * (Math.PI / 30) - Math.PI / 2);
			jf.repaint();
		}
	}
}
