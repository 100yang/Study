/**  
* <p>Title: kk.java</p>  
* <p>Description: </p>  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2019��1��4��  
* @version 1.0  
*/
package test;

import java.awt.BorderLayout;
/**  
* <p>Title: kk</p>  
* <p>Description: </p>  
* @author 100110100  
* @date 2019��1��4��  
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
		jf.setTitle("��̬ʱ��");
		clockPanel = new MyPanel();
		jf.add(clockPanel, BorderLayout.CENTER);
		b1 = new JButton("��������");
		b1.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				// ����Ҫ���õ�����ʱ��
				JOptionPane.showMessageDialog(jf, "���������ӿ�ʼ��ʱ��");
				sethour = Integer.parseInt(JOptionPane.showInputDialog("������Сʱ��"));
				setminute = Integer.parseInt(JOptionPane.showInputDialog("��������ӣ�"));
				setsecond = Integer.parseInt(JOptionPane.showInputDialog("�������룺"));

			}
		});
		jf.add(b1, BorderLayout.EAST);
		jf.setVisible(true);
		Timer t = new Timer();
		Task task = new Task();
		t.schedule(task, 0, 1000);// ÿ��ˢ��һ��
	}

	public void windowClosing(WindowEvent e) {
		jf.dispose();
		player.close();
	}

	File file = new File("���� - ������.mp3");

	public void play() {// ����mp3�ļ�
		try {
			BufferedInputStream buffer = new BufferedInputStream(new FileInputStream("���� - ������.mp3"));
			Player player = new Player(buffer);
			player.play();
		} catch (Exception e) {
			System.out.println(e);
		}
	}

	class MyPanel extends JPanel {
		public MyPanel() {
			//��ʼ���� �߶�
			e = new Ellipse2D.Double(X_BEGIN, Y_BEGIN, 100, 100);
			hourLine = new Line2D.Double(X, Y, X, Y);
			minLine = new Line2D.Double(X, Y, X, Y);
			secondLine = new Line2D.Double(X, Y, X, Y);

		}

		public void paintComponent(Graphics g) {
			/*
			 * �뱣��super.paintComponent(g);�� �������ȵ��ø���paintpaintComponent()������
			 * ����JPanel�������ǿհ���壬��Ϊ����Ҫ�ڸ����д�����Ȼ����������ʹ�òŻ���Ч
			 */
			super.paintComponent(g);
			Graphics2D g2 = (Graphics2D) g;
			//ͼ�� ����
			g2.drawString("12", 55, 25);// ����ʱ��
			g2.drawString("6", 55, 105);
			g2.drawString("9", 15, 65);
			g2.drawString("3", 100, 65);
			g2.drawString(timestr, 0, 130);
			g2.draw(e);
			g2.draw(hourLine);// ʱ��
			g2.draw(minLine);// ����
			g2.draw(secondLine);// ����
		}
	}

	class Task extends TimerTask {
		public void run() {
			calendar = new GregorianCalendar();
			hour = calendar.get(Calendar.HOUR);
			minute = calendar.get(Calendar.MINUTE);
			second = calendar.get(Calendar.SECOND);

			if (sethour == hour && setminute == minute && setsecond == second) {
				JOptionPane.showMessageDialog(jf, "�ף�����Ϣһ����");
				play();
			}

			timestr = "��ǰʱ�䣺" + hour + " : " + minute + " : " + second;

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
