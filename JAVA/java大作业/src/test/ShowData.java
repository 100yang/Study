/**  
* <p>Title: ShowData.java</p>  
* <p>Description: ������ʾ  
* <p>Copyright: Copyright (c) 2018</p>    
* @author 100110100  
* @date 2018��12��19��  
* @version 1.0  
*/
package test;

import java.awt.BorderLayout;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
/**  
* <p>Title: ShowData</p>  
* <p>Description: </p>  
* @author 100110100  
* @date 2018��12��19��  
*/
import java.lang.*;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.Timer;
import java.util.TimerTask;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class ShowData {
	String time;
	JFrame jf;
	JPanel jp;
	JLabel lab, L1, L2;
	JTextField text, t1, t2;

	JLabel b1, b2, b3, b4, b5, b6, b7;
	JButton bx, by;
	CalendaBean cb = new CalendaBean();
	JLabel[] label;
	JLabel now;

	public ShowData() {
		jf = new JFrame("����");
		lab = new JLabel("��ǰʱ��");
		jp = new JPanel(new FlowLayout(1));
		text = new JTextField(30);
		text.setEditable(false);
		text.setText(gettime());
		Timer timer = new Timer();
		timer.schedule(new RemindTask(), 0, 1000);
		Calendar cal = new GregorianCalendar();
		cb = new CalendaBean();
		int k1 = cal.get(Calendar.YEAR);
		cb.setYear(k1);

		String year = Integer.toString(k1);
		k1 = cal.get(Calendar.MONTH) + 1;
		cb.setMonth(k1);
		String mon = Integer.toString(k1);
		L1 = new JLabel("��");
		t1 = new JTextField(year);
		L2 = new JLabel("��");
		t2 = new JTextField(mon);
		jf.setLayout(new BorderLayout());
		JPanel pNorth = new JPanel(new GridLayout(2, 3));

		String[] a = cb.getCalendar();

		bx = new JButton("����");
		by = new JButton("����");
		bx.setActionCommand("lastmonth");
		by.setActionCommand("nextmonth");
		bx.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				cb.actionPerformed(e);
			}
		});
		by.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				cb.actionPerformed(e);
			}
		});

		pNorth.add(lab);
		pNorth.add(text);
		pNorth.add(bx);
		pNorth.add(by);
		jf.add(pNorth, BorderLayout.NORTH);

		GridLayout grid = new GridLayout(7, 7);
		JPanel pCenter = new JPanel();
		b1 = new JLabel("������");
		b2 = new JLabel("����һ");
		b3 = new JLabel("���ڶ�");
		b4 = new JLabel("������");
		b5 = new JLabel("������");
		b6 = new JLabel("������");
		b7 = new JLabel("������");
		pCenter.add(b1);
		pCenter.add(b2);
		pCenter.add(b3);
		pCenter.add(b4);
		pCenter.add(b5);
		pCenter.add(b6);
		pCenter.add(b7);
		label = new JLabel[42];
		for (int i = 0; i < 42; i++) {
			label[i] = new JLabel();
			pCenter.add(label[i]);
		}
		cb.label = this.label;
		for (int i = 0; i < a.length; i++) {
			label[i].setText("          " + a[i]);
		}
		pCenter.setLayout(grid);
		jf.add(pCenter, BorderLayout.CENTER);

		JPanel pSouth = new JPanel();
		now = new JLabel();
		now.setText("������" + year + "��" + mon + "��");
		cb.now = now;
		pSouth.add(now);
		jf.add(pSouth, BorderLayout.SOUTH);
		jf.setBounds(300, 455, 500, 500);
		jf.setVisible(true);
	}

	private class RemindTask extends TimerTask {
		public void run() {
			text.setText(gettime());
		}
	}

	private String gettime() {
		// ��ȡ��ǰʱ��(Ĭ��ʱ��)
		Calendar cal = Calendar.getInstance();
		Date date = (Date) cal.getTime();
		// �������ڸ�ʽ
		SimpleDateFormat form = new SimpleDateFormat("yyyy-MM-dd EEEE HH:mm:ss");
		time = form.format(date);
		return time;
	}
}
